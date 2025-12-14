#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1739174326;
long long int var_2 = -8847922417558358252LL;
int var_4 = -146433381;
signed char var_6 = (signed char)-99;
unsigned short var_7 = (unsigned short)16895;
signed char var_9 = (signed char)54;
unsigned long long int var_10 = 1525930495167751586ULL;
long long int var_11 = 8768100975240032605LL;
int zero = 0;
long long int var_13 = 1718874030362509523LL;
unsigned char var_14 = (unsigned char)152;
unsigned char var_15 = (unsigned char)46;
void init() {
}

void checksum() {
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
