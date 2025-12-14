#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-29574;
short var_10 = (short)-6884;
_Bool var_12 = (_Bool)0;
unsigned long long int var_18 = 18258053800756426407ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)17152;
unsigned short var_21 = (unsigned short)30079;
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
