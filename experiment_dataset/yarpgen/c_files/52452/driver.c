#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17660588471952095597ULL;
short var_5 = (short)-1465;
unsigned char var_7 = (unsigned char)223;
unsigned long long int var_8 = 10710688987833595784ULL;
unsigned long long int var_9 = 14647422378728603357ULL;
int zero = 0;
short var_12 = (short)-25778;
unsigned char var_13 = (unsigned char)112;
unsigned long long int var_14 = 2098357155082491235ULL;
unsigned char var_15 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
