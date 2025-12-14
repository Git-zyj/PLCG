#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2520019329224277000ULL;
unsigned char var_9 = (unsigned char)100;
unsigned char var_11 = (unsigned char)51;
unsigned long long int var_12 = 17916266421449402283ULL;
int zero = 0;
unsigned int var_13 = 176987872U;
unsigned long long int var_14 = 9667928993705321811ULL;
unsigned char var_15 = (unsigned char)212;
void init() {
}

void checksum() {
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
