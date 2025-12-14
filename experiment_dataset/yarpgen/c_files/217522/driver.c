#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10086928649078277470ULL;
unsigned long long int var_3 = 17993711948703469661ULL;
unsigned char var_4 = (unsigned char)229;
unsigned char var_5 = (unsigned char)135;
unsigned short var_7 = (unsigned short)14101;
long long int var_8 = -7811712360663347932LL;
int var_11 = 745663981;
unsigned char var_13 = (unsigned char)54;
int zero = 0;
short var_15 = (short)-14414;
unsigned long long int var_16 = 14445859347426409293ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1280680198758490156LL;
unsigned long long int var_19 = 6988722450420204170ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
