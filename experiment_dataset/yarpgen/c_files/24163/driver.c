#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1721714055U;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)7;
unsigned char var_5 = (unsigned char)66;
long long int var_9 = -4514639790973929910LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 4686897941062768154ULL;
unsigned long long int var_13 = 13956208097516969556ULL;
unsigned long long int var_14 = 10794950038351084011ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
