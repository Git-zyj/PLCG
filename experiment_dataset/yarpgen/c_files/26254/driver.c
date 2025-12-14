#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7436083864749872797LL;
long long int var_1 = 7014896098452474235LL;
short var_2 = (short)-20226;
int var_5 = 1907291887;
long long int var_6 = 8970957243160790541LL;
int var_7 = -417380248;
unsigned char var_9 = (unsigned char)107;
int zero = 0;
unsigned long long int var_11 = 3277450956229062312ULL;
unsigned long long int var_12 = 16518016167845266044ULL;
unsigned char var_13 = (unsigned char)205;
unsigned char var_14 = (unsigned char)46;
unsigned long long int var_15 = 12946350241240951027ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
