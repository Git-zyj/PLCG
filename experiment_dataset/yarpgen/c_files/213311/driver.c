#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3964785590477706470LL;
int var_2 = 934701793;
unsigned long long int var_3 = 6105948595131862278ULL;
int var_4 = -75086481;
long long int var_5 = -1814341644356813853LL;
signed char var_7 = (signed char)30;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
unsigned char var_10 = (unsigned char)44;
int var_11 = 505477094;
unsigned char var_12 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
