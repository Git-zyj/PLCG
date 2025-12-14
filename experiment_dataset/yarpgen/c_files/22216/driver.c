#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8530893503442295994ULL;
long long int var_4 = 707514098332428148LL;
signed char var_5 = (signed char)61;
unsigned short var_10 = (unsigned short)63556;
unsigned char var_11 = (unsigned char)196;
long long int var_12 = 1572498350826932407LL;
int zero = 0;
int var_13 = 1451554175;
unsigned long long int var_14 = 13183710467351922133ULL;
signed char var_15 = (signed char)122;
unsigned long long int var_16 = 412971921438094289ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
