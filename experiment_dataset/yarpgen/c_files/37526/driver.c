#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27244;
_Bool var_1 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 2404864344285543232ULL;
int zero = 0;
signed char var_18 = (signed char)87;
unsigned char var_19 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
