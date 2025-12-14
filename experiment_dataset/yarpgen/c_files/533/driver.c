#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2940368978U;
int var_1 = 177264252;
int var_3 = 1169279181;
short var_5 = (short)14003;
signed char var_7 = (signed char)-114;
int var_8 = 842668442;
short var_12 = (short)4601;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1187156641U;
_Bool var_17 = (_Bool)1;
int var_18 = -406614917;
void init() {
}

void checksum() {
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
