#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)20350;
unsigned int var_9 = 695795073U;
unsigned int var_11 = 4142372458U;
int var_16 = 438659210;
int zero = 0;
int var_18 = -788813795;
unsigned long long int var_19 = 12075187625851394255ULL;
unsigned long long int var_20 = 7239758019103985550ULL;
void init() {
}

void checksum() {
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
