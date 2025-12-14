#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29531;
unsigned long long int var_7 = 6066719476201215776ULL;
unsigned short var_14 = (unsigned short)12506;
int zero = 0;
long long int var_18 = -3103563959532043614LL;
long long int var_19 = -8233156392235263026LL;
unsigned short var_20 = (unsigned short)28425;
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
