#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17598;
unsigned char var_9 = (unsigned char)94;
unsigned short var_10 = (unsigned short)55109;
signed char var_15 = (signed char)66;
short var_16 = (short)11690;
unsigned long long int var_18 = 9013518568370208536ULL;
int zero = 0;
int var_19 = 1646150755;
unsigned char var_20 = (unsigned char)146;
int var_21 = 1316838192;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
