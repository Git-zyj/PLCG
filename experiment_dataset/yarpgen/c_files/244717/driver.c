#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17299567153546961207ULL;
unsigned long long int var_7 = 16182711350769779268ULL;
int zero = 0;
unsigned long long int var_12 = 12756239429902064273ULL;
unsigned long long int var_13 = 11484013536811229918ULL;
void init() {
}

void checksum() {
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
