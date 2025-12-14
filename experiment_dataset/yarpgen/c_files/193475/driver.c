#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -669670221300797968LL;
unsigned char var_1 = (unsigned char)167;
unsigned char var_2 = (unsigned char)195;
short var_3 = (short)-25208;
unsigned char var_4 = (unsigned char)0;
long long int var_5 = 2126320217186278358LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 143689511997455945ULL;
int zero = 0;
long long int var_12 = -2839062823954294136LL;
long long int var_13 = -4004496969395841562LL;
long long int var_14 = -8932357882126127469LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
