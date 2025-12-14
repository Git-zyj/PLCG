#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36009;
long long int var_2 = -7582462293245206717LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 1689898975504232161ULL;
_Bool var_9 = (_Bool)1;
signed char var_15 = (signed char)108;
int zero = 0;
unsigned int var_17 = 4289941474U;
unsigned short var_18 = (unsigned short)49563;
signed char var_19 = (signed char)92;
signed char var_20 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
