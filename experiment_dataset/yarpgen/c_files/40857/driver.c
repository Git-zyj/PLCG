#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)63;
unsigned short var_3 = (unsigned short)4765;
unsigned int var_4 = 2167947555U;
_Bool var_5 = (_Bool)0;
int var_9 = -696964050;
int var_12 = -1806842261;
unsigned char var_13 = (unsigned char)134;
unsigned char var_14 = (unsigned char)123;
int var_15 = -889029827;
int zero = 0;
unsigned long long int var_16 = 16328519382943224550ULL;
long long int var_17 = 5601592086162456450LL;
unsigned long long int var_18 = 18235400859745950783ULL;
void init() {
}

void checksum() {
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
