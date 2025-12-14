#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1390254593U;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)58931;
unsigned int var_8 = 661463809U;
signed char var_9 = (signed char)85;
int zero = 0;
unsigned char var_10 = (unsigned char)225;
unsigned int var_11 = 576146130U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
