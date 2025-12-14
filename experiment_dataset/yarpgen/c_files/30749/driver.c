#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1028570515616810526ULL;
signed char var_9 = (signed char)44;
signed char var_11 = (signed char)-37;
int zero = 0;
unsigned long long int var_13 = 15434034428560025519ULL;
unsigned long long int var_14 = 7242348049786772468ULL;
unsigned long long int var_15 = 15549577844077006124ULL;
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
