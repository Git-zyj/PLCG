#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17389877900839080089ULL;
unsigned short var_4 = (unsigned short)31646;
unsigned short var_5 = (unsigned short)41190;
unsigned long long int var_6 = 14098376063017128181ULL;
int var_7 = 1362868346;
long long int var_8 = 2468129855645924665LL;
unsigned long long int var_9 = 5877146642951999269ULL;
int var_11 = 1091797017;
unsigned int var_12 = 577076064U;
int var_14 = -1959148995;
int zero = 0;
long long int var_15 = 8150987509946109944LL;
unsigned short var_16 = (unsigned short)43810;
unsigned long long int var_17 = 9851685037429920126ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
