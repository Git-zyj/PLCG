#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-16895;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-29976;
int zero = 0;
unsigned char var_18 = (unsigned char)10;
unsigned char var_19 = (unsigned char)196;
unsigned char var_20 = (unsigned char)164;
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
