#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4925290575683550147ULL;
unsigned short var_1 = (unsigned short)5418;
unsigned long long int var_7 = 12580293250526705919ULL;
int zero = 0;
long long int var_20 = 1833914951252770349LL;
unsigned short var_21 = (unsigned short)36198;
unsigned short var_22 = (unsigned short)11972;
void init() {
}

void checksum() {
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
