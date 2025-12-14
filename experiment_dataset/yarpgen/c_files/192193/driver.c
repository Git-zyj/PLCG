#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42749;
unsigned short var_12 = (unsigned short)14095;
unsigned short var_13 = (unsigned short)51520;
unsigned short var_17 = (unsigned short)39135;
int zero = 0;
unsigned short var_18 = (unsigned short)22502;
unsigned short var_19 = (unsigned short)49756;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
