#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14765156639858786531ULL;
unsigned long long int var_2 = 1779144214240416787ULL;
unsigned long long int var_8 = 1437373977969136687ULL;
unsigned short var_10 = (unsigned short)38906;
int zero = 0;
unsigned long long int var_13 = 1937242699843967510ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11080523963497043111ULL;
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
