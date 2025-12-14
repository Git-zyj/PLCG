#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14128645654282727639ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)32434;
unsigned short var_12 = (unsigned short)22390;
int zero = 0;
unsigned int var_14 = 631580390U;
unsigned int var_15 = 1257255909U;
void init() {
}

void checksum() {
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
