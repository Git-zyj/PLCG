#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8469998776359389891ULL;
unsigned int var_2 = 926409590U;
unsigned char var_4 = (unsigned char)57;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 646250400U;
int zero = 0;
unsigned char var_11 = (unsigned char)7;
short var_12 = (short)-8475;
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
