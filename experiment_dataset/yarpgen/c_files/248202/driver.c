#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)185;
unsigned long long int var_4 = 11679252484776473005ULL;
unsigned long long int var_5 = 6947193976608244137ULL;
long long int var_6 = -1475847679296169235LL;
unsigned int var_7 = 2992055680U;
short var_8 = (short)14465;
unsigned long long int var_9 = 5254325804794354587ULL;
signed char var_10 = (signed char)-89;
short var_11 = (short)23435;
int var_12 = -745440365;
_Bool var_14 = (_Bool)1;
int var_15 = -100996307;
unsigned int var_16 = 3649067418U;
short var_18 = (short)-30565;
int zero = 0;
unsigned int var_20 = 2664412942U;
unsigned char var_21 = (unsigned char)67;
signed char var_22 = (signed char)-103;
unsigned char var_23 = (unsigned char)166;
unsigned short var_24 = (unsigned short)34020;
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
