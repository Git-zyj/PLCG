#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)249;
unsigned char var_7 = (unsigned char)201;
unsigned long long int var_9 = 16326515147498968744ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)153;
unsigned short var_13 = (unsigned short)38723;
int var_16 = -975905881;
int zero = 0;
signed char var_17 = (signed char)-36;
unsigned int var_18 = 2954742579U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
