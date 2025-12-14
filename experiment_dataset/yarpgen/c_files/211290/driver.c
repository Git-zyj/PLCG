#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)76;
unsigned short var_3 = (unsigned short)40214;
unsigned long long int var_4 = 11086506201373909467ULL;
unsigned char var_5 = (unsigned char)69;
unsigned long long int var_7 = 16883514155585819048ULL;
unsigned long long int var_8 = 17816972260942163505ULL;
unsigned long long int var_10 = 11089278908507990898ULL;
unsigned short var_12 = (unsigned short)38008;
unsigned long long int var_14 = 11741633921960213846ULL;
unsigned short var_16 = (unsigned short)8440;
unsigned short var_17 = (unsigned short)45208;
int zero = 0;
signed char var_18 = (signed char)-60;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)221;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
