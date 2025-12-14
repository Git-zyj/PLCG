#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
unsigned short var_1 = (unsigned short)25576;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3390729834U;
unsigned short var_6 = (unsigned short)60968;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 8930941954227385689ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)193;
unsigned short var_14 = (unsigned short)53231;
unsigned char var_15 = (unsigned char)215;
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
