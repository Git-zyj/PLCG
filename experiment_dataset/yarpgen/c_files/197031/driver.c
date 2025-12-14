#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38962;
long long int var_2 = 5892256007811891312LL;
unsigned int var_8 = 89430796U;
unsigned long long int var_9 = 3785041475544502361ULL;
int var_10 = -1804586756;
int zero = 0;
unsigned short var_11 = (unsigned short)10913;
long long int var_12 = -7587243022695902392LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
