#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3038015928U;
long long int var_4 = -7128897075432990287LL;
unsigned char var_9 = (unsigned char)235;
int zero = 0;
long long int var_11 = -2661166871780480058LL;
int var_12 = -355055392;
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
