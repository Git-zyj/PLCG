#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 601772451559503692LL;
short var_10 = (short)-6893;
long long int var_14 = 471526118910333550LL;
int zero = 0;
unsigned int var_15 = 554963190U;
unsigned short var_16 = (unsigned short)50090;
long long int var_17 = 5707647029218832049LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
