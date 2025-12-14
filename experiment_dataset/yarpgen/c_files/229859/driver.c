#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1211627521;
int var_1 = -876375464;
long long int var_3 = -6689121448490117556LL;
long long int var_10 = -3925251969137861530LL;
long long int var_15 = -1066244796622380134LL;
int zero = 0;
int var_16 = 977321264;
long long int var_17 = 1037023644480289003LL;
void init() {
}

void checksum() {
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
