#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 206964597U;
unsigned short var_6 = (unsigned short)3007;
unsigned char var_14 = (unsigned char)181;
int var_19 = 1865174154;
int zero = 0;
unsigned int var_20 = 1911577092U;
unsigned char var_21 = (unsigned char)190;
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
