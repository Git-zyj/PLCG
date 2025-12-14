#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 8619833486681728147ULL;
unsigned long long int var_16 = 13420821034147506464ULL;
int zero = 0;
signed char var_18 = (signed char)-94;
short var_19 = (short)-5845;
unsigned long long int var_20 = 925872866995501489ULL;
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
