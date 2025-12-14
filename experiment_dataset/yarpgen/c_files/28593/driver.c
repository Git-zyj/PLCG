#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -397186655;
unsigned long long int var_6 = 12724889379581167112ULL;
short var_9 = (short)-814;
int zero = 0;
unsigned short var_10 = (unsigned short)54958;
unsigned short var_11 = (unsigned short)58830;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
