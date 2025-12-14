#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17008042902076015442ULL;
int var_4 = 297704701;
unsigned int var_5 = 935938443U;
unsigned short var_7 = (unsigned short)29049;
int var_8 = -455159038;
short var_9 = (short)29580;
signed char var_10 = (signed char)-83;
signed char var_11 = (signed char)-35;
short var_12 = (short)22327;
unsigned int var_14 = 3556899683U;
unsigned short var_15 = (unsigned short)45698;
int var_16 = -1966280372;
unsigned long long int var_17 = 4700617644375171503ULL;
int zero = 0;
signed char var_18 = (signed char)100;
signed char var_19 = (signed char)-111;
signed char var_20 = (signed char)105;
signed char var_21 = (signed char)94;
short var_22 = (short)-20365;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
