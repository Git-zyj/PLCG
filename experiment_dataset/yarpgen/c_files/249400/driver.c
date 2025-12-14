#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6013059309683960440ULL;
unsigned int var_2 = 2142788381U;
unsigned char var_7 = (unsigned char)36;
unsigned short var_9 = (unsigned short)65313;
signed char var_11 = (signed char)109;
long long int var_12 = 3646372578157235510LL;
int zero = 0;
unsigned long long int var_15 = 6139323076370354092ULL;
unsigned short var_16 = (unsigned short)53318;
signed char var_17 = (signed char)-123;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
