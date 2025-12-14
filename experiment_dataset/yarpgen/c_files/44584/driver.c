#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
unsigned char var_3 = (unsigned char)234;
_Bool var_5 = (_Bool)1;
unsigned long long int var_13 = 13703256346104166237ULL;
int zero = 0;
unsigned long long int var_15 = 11436898554755729536ULL;
unsigned long long int var_16 = 11355356433820291030ULL;
int var_17 = -872637174;
unsigned long long int var_18 = 6188213607014176261ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
