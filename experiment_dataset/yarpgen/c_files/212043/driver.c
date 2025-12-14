#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 1232744229213831258LL;
unsigned int var_9 = 4186269690U;
long long int var_12 = 7645261395656785400LL;
long long int var_16 = 2317901995538792863LL;
int zero = 0;
unsigned char var_20 = (unsigned char)126;
unsigned int var_21 = 3271442739U;
unsigned char var_22 = (unsigned char)44;
unsigned char var_23 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
