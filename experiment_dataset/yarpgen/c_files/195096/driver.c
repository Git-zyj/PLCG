#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3416884740105000589LL;
short var_6 = (short)16987;
unsigned char var_8 = (unsigned char)102;
short var_11 = (short)-18533;
int zero = 0;
long long int var_14 = 3981989570206224839LL;
long long int var_15 = -4907590930615356403LL;
void init() {
}

void checksum() {
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
