#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12991827397352745327ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_8 = (unsigned short)23885;
long long int var_9 = 8059841492674159550LL;
unsigned long long int var_14 = 16330771573620003000ULL;
long long int var_17 = 8773416392797078887LL;
int zero = 0;
unsigned char var_18 = (unsigned char)115;
unsigned char var_19 = (unsigned char)134;
unsigned int var_20 = 2813695128U;
unsigned short var_21 = (unsigned short)50999;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
