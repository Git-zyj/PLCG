#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14549998196094889508ULL;
signed char var_6 = (signed char)123;
unsigned long long int var_7 = 3544017582642495078ULL;
unsigned char var_13 = (unsigned char)112;
unsigned long long int var_16 = 12912009755115484078ULL;
unsigned int var_18 = 3318009702U;
int zero = 0;
unsigned long long int var_19 = 7741518397586370856ULL;
unsigned char var_20 = (unsigned char)20;
void init() {
}

void checksum() {
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
