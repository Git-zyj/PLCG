#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = -3300737258709521961LL;
int zero = 0;
unsigned long long int var_15 = 17554217986694042299ULL;
unsigned long long int var_16 = 13024730623234222056ULL;
unsigned long long int var_17 = 17851676211241111609ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
