#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2514791716U;
unsigned int var_5 = 1161249277U;
unsigned int var_6 = 3419800677U;
unsigned char var_7 = (unsigned char)36;
long long int var_10 = -3117473183721160021LL;
int zero = 0;
unsigned int var_13 = 3197511215U;
unsigned int var_14 = 3859010339U;
unsigned long long int var_15 = 15173755282822877696ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
