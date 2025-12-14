#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
unsigned char var_2 = (unsigned char)132;
unsigned char var_6 = (unsigned char)245;
unsigned char var_7 = (unsigned char)116;
unsigned char var_8 = (unsigned char)110;
unsigned char var_13 = (unsigned char)164;
int zero = 0;
unsigned char var_14 = (unsigned char)209;
unsigned char var_15 = (unsigned char)93;
void init() {
}

void checksum() {
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
