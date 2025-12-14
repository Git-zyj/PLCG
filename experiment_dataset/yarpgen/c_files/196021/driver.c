#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -419844757;
long long int var_9 = -5175293625173170061LL;
short var_17 = (short)11383;
int zero = 0;
unsigned short var_20 = (unsigned short)60769;
unsigned char var_21 = (unsigned char)54;
unsigned int var_22 = 3424090209U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
