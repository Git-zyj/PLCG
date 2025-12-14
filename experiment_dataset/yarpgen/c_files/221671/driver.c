#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41835;
unsigned short var_1 = (unsigned short)34216;
unsigned short var_3 = (unsigned short)46884;
unsigned short var_13 = (unsigned short)52645;
int zero = 0;
unsigned long long int var_15 = 16039042323712352943ULL;
unsigned short var_16 = (unsigned short)57067;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
