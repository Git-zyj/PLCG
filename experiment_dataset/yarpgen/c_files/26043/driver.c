#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11156;
signed char var_4 = (signed char)-83;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 980494854446632508ULL;
int var_7 = 1755179888;
unsigned long long int var_8 = 8268727819792761673ULL;
signed char var_10 = (signed char)14;
_Bool var_11 = (_Bool)1;
unsigned short var_15 = (unsigned short)12564;
int var_16 = -743586709;
unsigned long long int var_19 = 12909624762523195837ULL;
int zero = 0;
int var_20 = 1139930439;
unsigned short var_21 = (unsigned short)41232;
short var_22 = (short)-17921;
void init() {
}

void checksum() {
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
