#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23472;
short var_8 = (short)-20063;
long long int var_12 = 6555448685674479004LL;
int zero = 0;
short var_13 = (short)32355;
unsigned char var_14 = (unsigned char)172;
long long int var_15 = -5689620720151686545LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
