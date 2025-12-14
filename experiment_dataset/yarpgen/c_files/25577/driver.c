#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4461539100282637056ULL;
unsigned short var_8 = (unsigned short)61415;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)14080;
unsigned short var_13 = (unsigned short)9667;
unsigned int var_14 = 2872284085U;
int zero = 0;
unsigned short var_15 = (unsigned short)37980;
unsigned int var_16 = 4042986727U;
signed char var_17 = (signed char)97;
long long int var_18 = -2563678711302653756LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
