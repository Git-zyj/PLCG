#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5679274658777757904ULL;
unsigned char var_1 = (unsigned char)139;
unsigned int var_6 = 3227635390U;
short var_8 = (short)22858;
int zero = 0;
unsigned long long int var_10 = 3644708225710116110ULL;
long long int var_11 = 8531609238574195832LL;
unsigned int var_12 = 4158898572U;
short var_13 = (short)9502;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
