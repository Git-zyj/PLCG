#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11563900779057272834ULL;
signed char var_6 = (signed char)99;
unsigned long long int var_8 = 10383021744674114069ULL;
int zero = 0;
unsigned long long int var_18 = 3528959679295403578ULL;
unsigned int var_19 = 2870725857U;
unsigned int var_20 = 249844875U;
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
