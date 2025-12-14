#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3098638906U;
unsigned int var_4 = 1408951749U;
unsigned long long int var_6 = 12473819372295235565ULL;
int zero = 0;
unsigned long long int var_17 = 4173260507362965183ULL;
unsigned long long int var_18 = 8225012254856763229ULL;
unsigned int var_19 = 4050057617U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
