#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2620893889U;
unsigned short var_5 = (unsigned short)34729;
unsigned short var_9 = (unsigned short)49344;
int zero = 0;
int var_10 = -1402176905;
long long int var_11 = 9140493666879642813LL;
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
