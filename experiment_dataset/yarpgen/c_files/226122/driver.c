#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1599301583;
signed char var_5 = (signed char)17;
signed char var_8 = (signed char)101;
short var_9 = (short)-25848;
unsigned short var_12 = (unsigned short)16503;
int var_14 = 633139371;
signed char var_15 = (signed char)94;
signed char var_16 = (signed char)70;
signed char var_17 = (signed char)-45;
int zero = 0;
signed char var_20 = (signed char)56;
int var_21 = 1286477420;
int var_22 = 1107541346;
long long int var_23 = 3913030537825416513LL;
short var_24 = (short)-2881;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
