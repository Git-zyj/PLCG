#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1580537605;
unsigned long long int var_9 = 4044210657310622654ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)27;
int var_11 = -1403714466;
unsigned long long int var_12 = 7560105270379004419ULL;
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
