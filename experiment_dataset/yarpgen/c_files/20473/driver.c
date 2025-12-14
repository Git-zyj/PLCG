#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-121;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 31703394U;
signed char var_19 = (signed char)127;
int zero = 0;
unsigned int var_20 = 1941867608U;
unsigned long long int var_21 = 14522489783720675845ULL;
unsigned short var_22 = (unsigned short)19567;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
