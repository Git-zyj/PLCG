#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5736208989251835590ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_9 = 17582584131599378722ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)99;
unsigned char var_16 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
