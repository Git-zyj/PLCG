#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)23101;
unsigned int var_8 = 945965190U;
long long int var_10 = -9006441535771460572LL;
int zero = 0;
unsigned int var_11 = 3264383740U;
unsigned short var_12 = (unsigned short)41574;
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
