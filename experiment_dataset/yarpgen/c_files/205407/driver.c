#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5689363036641276539LL;
short var_6 = (short)1643;
long long int var_7 = 3967687169161186176LL;
int zero = 0;
unsigned int var_19 = 3427626676U;
unsigned char var_20 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
