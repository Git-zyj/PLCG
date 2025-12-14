#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2772946132340095231ULL;
long long int var_8 = 2819979743224905021LL;
unsigned long long int var_10 = 5103401646345885712ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)17284;
unsigned short var_15 = (unsigned short)6843;
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
