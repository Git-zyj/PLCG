#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1746131851;
short var_1 = (short)12115;
int var_2 = 1321797563;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 694442574U;
long long int var_5 = -5584076959663591493LL;
_Bool var_6 = (_Bool)0;
int var_7 = -356807205;
signed char var_8 = (signed char)-78;
long long int var_9 = -3020612237093192404LL;
long long int var_10 = 7658932422404248213LL;
int zero = 0;
int var_11 = 1572356544;
long long int var_12 = -2646752092313398228LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)25813;
unsigned short var_15 = (unsigned short)57861;
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
