#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)10242;
unsigned short var_9 = (unsigned short)55827;
unsigned int var_11 = 2629977499U;
unsigned long long int var_15 = 11359999925285484219ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)1478;
long long int var_17 = -6829412429610403274LL;
unsigned char var_18 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
