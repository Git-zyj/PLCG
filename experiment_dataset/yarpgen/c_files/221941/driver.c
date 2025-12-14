#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 163580539U;
unsigned short var_4 = (unsigned short)57467;
unsigned int var_5 = 910510785U;
unsigned int var_6 = 282880535U;
int var_8 = 74300342;
signed char var_10 = (signed char)82;
int zero = 0;
unsigned long long int var_13 = 3649706915735771852ULL;
signed char var_14 = (signed char)-25;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
