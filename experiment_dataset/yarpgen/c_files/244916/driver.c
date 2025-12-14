#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)59927;
long long int var_7 = 3858372838155129995LL;
unsigned long long int var_9 = 2010978432336829213ULL;
long long int var_10 = 3528421233317528722LL;
unsigned short var_11 = (unsigned short)8787;
unsigned short var_12 = (unsigned short)34113;
int zero = 0;
long long int var_15 = -5754238723083033887LL;
long long int var_16 = -6193005901708416488LL;
long long int var_17 = -6025004025135550815LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
