#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2959701527U;
unsigned long long int var_9 = 12638193062353091606ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)103;
unsigned char var_20 = (unsigned char)127;
unsigned long long int var_21 = 10494380028988988057ULL;
unsigned char var_22 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
