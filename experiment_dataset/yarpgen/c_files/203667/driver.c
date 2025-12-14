#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12230968215378398799ULL;
unsigned long long int var_8 = 2986182370575367214ULL;
long long int var_9 = -2693625279271551442LL;
unsigned long long int var_13 = 9691120076111987804ULL;
int zero = 0;
short var_14 = (short)-6743;
long long int var_15 = 8279768225721034057LL;
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
