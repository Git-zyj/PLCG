#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-67;
unsigned long long int var_4 = 15563728971656646383ULL;
int var_10 = 398527343;
int zero = 0;
unsigned long long int var_18 = 1622242271341211670ULL;
unsigned int var_19 = 2504430221U;
unsigned long long int var_20 = 5561560984080079252ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
