#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
long long int var_2 = 4834786148124691498LL;
unsigned long long int var_4 = 14026560896220568799ULL;
short var_5 = (short)-3138;
unsigned char var_6 = (unsigned char)123;
unsigned char var_9 = (unsigned char)50;
int zero = 0;
signed char var_11 = (signed char)-22;
short var_12 = (short)1385;
unsigned char var_13 = (unsigned char)36;
signed char var_14 = (signed char)-73;
long long int var_15 = -4517405189076221747LL;
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
