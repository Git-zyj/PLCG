#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
unsigned long long int var_1 = 6683285338774594993ULL;
short var_2 = (short)-17326;
long long int var_3 = -7135737039351227102LL;
unsigned int var_4 = 95895632U;
short var_5 = (short)-16795;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)108;
int zero = 0;
signed char var_11 = (signed char)-11;
unsigned short var_12 = (unsigned short)54450;
unsigned long long int var_13 = 258480578409997233ULL;
unsigned long long int var_14 = 4470255332523563522ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
