#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12537435924094659761ULL;
unsigned long long int var_3 = 14695646948763588333ULL;
signed char var_7 = (signed char)102;
unsigned char var_9 = (unsigned char)203;
long long int var_10 = -2020220485710849247LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = -6459266517351515812LL;
unsigned short var_13 = (unsigned short)26808;
long long int var_15 = -2771455016609838335LL;
long long int var_16 = 3900261298041778664LL;
int zero = 0;
unsigned short var_17 = (unsigned short)23740;
int var_18 = 36477187;
long long int var_19 = -5224414633187178360LL;
short var_20 = (short)-23063;
long long int var_21 = 6267499735852777183LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
