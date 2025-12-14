#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -4783798047059759559LL;
signed char var_4 = (signed char)41;
unsigned int var_7 = 4177348280U;
int var_8 = 1400130100;
unsigned char var_9 = (unsigned char)67;
int zero = 0;
unsigned int var_11 = 3655275304U;
long long int var_12 = -8919906685659331030LL;
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
