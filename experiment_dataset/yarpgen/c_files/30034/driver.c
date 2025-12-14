#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5126736046667956799LL;
long long int var_1 = -2184258154891604487LL;
long long int var_3 = 100084889380753770LL;
int var_6 = 438209362;
int var_7 = 317042954;
long long int var_11 = -6441583449625026850LL;
int var_12 = 758038403;
long long int var_13 = 4634730319048089788LL;
int zero = 0;
long long int var_16 = -5372589504833577195LL;
unsigned long long int var_17 = 8748609568153219672ULL;
int var_18 = 134763991;
unsigned long long int var_19 = 13644568406382014572ULL;
long long int var_20 = -1267861147249015262LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
