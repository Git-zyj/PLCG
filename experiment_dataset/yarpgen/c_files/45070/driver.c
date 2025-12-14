#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 787023216;
int var_6 = 249548599;
long long int var_7 = 4537901131632053999LL;
signed char var_8 = (signed char)71;
int var_10 = -1489601331;
signed char var_12 = (signed char)40;
int zero = 0;
unsigned int var_13 = 2155912956U;
long long int var_14 = -5739403074575125650LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
