#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)91;
unsigned short var_11 = (unsigned short)28187;
int zero = 0;
unsigned long long int var_15 = 3750023115031321395ULL;
unsigned int var_16 = 2716365069U;
unsigned short var_17 = (unsigned short)40830;
unsigned long long int var_18 = 2395192850482375595ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
