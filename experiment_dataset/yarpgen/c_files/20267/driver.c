#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3025090228838524901ULL;
short var_6 = (short)1988;
int zero = 0;
unsigned long long int var_16 = 3970061068302387898ULL;
unsigned char var_17 = (unsigned char)207;
short var_18 = (short)14808;
short var_19 = (short)280;
unsigned short var_20 = (unsigned short)3708;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
