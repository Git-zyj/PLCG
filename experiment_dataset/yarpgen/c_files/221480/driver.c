#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1572;
long long int var_1 = 5171289176772433299LL;
unsigned short var_6 = (unsigned short)25836;
unsigned long long int var_7 = 8876120068735387217ULL;
unsigned long long int var_10 = 3490741265533704804ULL;
unsigned int var_12 = 1269095143U;
unsigned int var_13 = 2384740776U;
int zero = 0;
unsigned long long int var_14 = 18040136233734809632ULL;
short var_15 = (short)2190;
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
