#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6193958321479123431LL;
unsigned int var_6 = 1570655600U;
unsigned long long int var_8 = 6813247311235606063ULL;
int zero = 0;
unsigned int var_17 = 1576243311U;
long long int var_18 = -9146368425354829228LL;
void init() {
}

void checksum() {
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
