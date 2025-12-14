#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17604865816158294504ULL;
unsigned long long int var_10 = 9112884907330593638ULL;
int zero = 0;
unsigned long long int var_19 = 13522966132360103537ULL;
unsigned char var_20 = (unsigned char)115;
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
