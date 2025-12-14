#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
unsigned char var_3 = (unsigned char)171;
unsigned short var_11 = (unsigned short)14298;
unsigned int var_12 = 4191716357U;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
