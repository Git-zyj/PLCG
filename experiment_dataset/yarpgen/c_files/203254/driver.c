#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6716;
unsigned long long int var_5 = 13652589351094860867ULL;
unsigned long long int var_8 = 17437071614554126929ULL;
unsigned short var_11 = (unsigned short)25020;
int zero = 0;
unsigned short var_12 = (unsigned short)27426;
unsigned short var_13 = (unsigned short)55976;
unsigned short var_14 = (unsigned short)44395;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
