#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)17275;
unsigned char var_9 = (unsigned char)209;
int var_12 = 1179389227;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)13163;
unsigned short var_18 = (unsigned short)62772;
long long int var_19 = 2780280901194275821LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
