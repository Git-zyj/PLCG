#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)50;
unsigned char var_4 = (unsigned char)174;
short var_5 = (short)4163;
short var_6 = (short)-17613;
short var_7 = (short)-17136;
short var_9 = (short)-539;
int zero = 0;
unsigned char var_10 = (unsigned char)132;
short var_11 = (short)-10040;
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
