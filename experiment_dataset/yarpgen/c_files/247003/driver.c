#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1880575878;
unsigned short var_1 = (unsigned short)50110;
unsigned int var_2 = 1830712566U;
long long int var_8 = -2304286242391456193LL;
short var_10 = (short)-30031;
int zero = 0;
int var_13 = 2113468641;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 14525419653868513545ULL;
void init() {
}

void checksum() {
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
