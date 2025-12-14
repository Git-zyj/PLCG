#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2024735448;
unsigned short var_3 = (unsigned short)64967;
long long int var_6 = 4266645215765563097LL;
unsigned int var_9 = 4203269123U;
int zero = 0;
long long int var_10 = 9066179771197439258LL;
int var_11 = 984835920;
unsigned int var_12 = 1104438403U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
