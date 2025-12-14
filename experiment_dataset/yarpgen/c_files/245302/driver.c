#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)157;
unsigned long long int var_7 = 11810614547867160087ULL;
long long int var_9 = 1235062467635312101LL;
unsigned int var_10 = 349477294U;
int zero = 0;
unsigned long long int var_14 = 3736536599240905861ULL;
unsigned long long int var_15 = 5011049544969158167ULL;
unsigned short var_16 = (unsigned short)21810;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
