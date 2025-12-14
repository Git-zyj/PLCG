#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2914355781U;
long long int var_4 = -5773957853028626143LL;
unsigned short var_9 = (unsigned short)58286;
int zero = 0;
unsigned short var_10 = (unsigned short)23089;
unsigned long long int var_11 = 9239837561392702295ULL;
long long int var_12 = -398877496161040328LL;
unsigned short var_13 = (unsigned short)49181;
unsigned char var_14 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
