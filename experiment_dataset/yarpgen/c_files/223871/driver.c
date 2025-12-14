#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-5;
unsigned char var_7 = (unsigned char)88;
unsigned long long int var_8 = 10169749798495251167ULL;
unsigned char var_9 = (unsigned char)253;
unsigned long long int var_11 = 14022927698054335772ULL;
unsigned long long int var_14 = 3420620939111224257ULL;
int zero = 0;
signed char var_16 = (signed char)-90;
unsigned char var_17 = (unsigned char)103;
int var_18 = -1475497431;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
