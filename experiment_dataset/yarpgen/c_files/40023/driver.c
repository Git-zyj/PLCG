#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9041371988819510788LL;
unsigned int var_3 = 3174919015U;
unsigned char var_7 = (unsigned char)80;
long long int var_8 = -3845032446142852954LL;
unsigned char var_13 = (unsigned char)53;
int zero = 0;
unsigned char var_15 = (unsigned char)118;
unsigned char var_16 = (unsigned char)22;
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
