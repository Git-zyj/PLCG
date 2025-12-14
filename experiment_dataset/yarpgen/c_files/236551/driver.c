#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)21494;
long long int var_9 = 4316887288863164525LL;
long long int var_10 = 1041343273213906834LL;
int zero = 0;
unsigned short var_14 = (unsigned short)18567;
int var_15 = -1461399080;
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
