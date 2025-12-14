#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -478268238;
unsigned short var_9 = (unsigned short)45637;
int var_13 = 1560619547;
int zero = 0;
signed char var_16 = (signed char)107;
unsigned short var_17 = (unsigned short)24895;
unsigned short var_18 = (unsigned short)62106;
long long int var_19 = 3372292350798298224LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
