#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)96;
unsigned short var_9 = (unsigned short)21852;
short var_10 = (short)21617;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 9794686347749300790ULL;
unsigned long long int var_21 = 4968889145751062557ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
