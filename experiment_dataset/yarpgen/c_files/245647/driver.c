#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
short var_2 = (short)8018;
unsigned long long int var_9 = 3269269851178623474ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)33417;
unsigned long long int var_13 = 11332282597990506395ULL;
unsigned long long int var_14 = 9064141780203018018ULL;
int var_15 = 392830540;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
