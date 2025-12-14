#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1045;
signed char var_5 = (signed char)-65;
unsigned int var_6 = 2680122442U;
unsigned char var_7 = (unsigned char)109;
signed char var_8 = (signed char)-84;
unsigned int var_11 = 1496890709U;
unsigned long long int var_12 = 4451647592243297802ULL;
unsigned char var_14 = (unsigned char)249;
signed char var_16 = (signed char)-65;
int zero = 0;
signed char var_19 = (signed char)5;
unsigned long long int var_20 = 10922260562251802227ULL;
int var_21 = 625187597;
short var_22 = (short)-11724;
void init() {
}

void checksum() {
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
