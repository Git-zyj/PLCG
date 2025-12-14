#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2493663797760815980ULL;
unsigned long long int var_2 = 14148752552515775348ULL;
unsigned long long int var_4 = 4418515758709326608ULL;
unsigned short var_5 = (unsigned short)27954;
unsigned int var_12 = 3773807534U;
unsigned short var_14 = (unsigned short)40043;
unsigned int var_17 = 1836337049U;
signed char var_18 = (signed char)2;
int zero = 0;
unsigned short var_19 = (unsigned short)2213;
unsigned int var_20 = 1755529726U;
unsigned char var_21 = (unsigned char)219;
short var_22 = (short)17861;
signed char var_23 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
