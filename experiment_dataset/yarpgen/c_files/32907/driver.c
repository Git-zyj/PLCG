#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -378431242;
unsigned char var_2 = (unsigned char)17;
unsigned long long int var_5 = 12426563507075913686ULL;
unsigned short var_9 = (unsigned short)1883;
unsigned long long int var_13 = 2741998576725925739ULL;
int zero = 0;
int var_14 = -676690002;
unsigned long long int var_15 = 1049451345964889606ULL;
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
