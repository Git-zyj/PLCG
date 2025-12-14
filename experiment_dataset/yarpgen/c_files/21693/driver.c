#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4266296123U;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)238;
unsigned char var_11 = (unsigned char)136;
unsigned long long int var_12 = 12732681122672617838ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)13376;
int zero = 0;
unsigned char var_19 = (unsigned char)59;
long long int var_20 = -195611180821339773LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 798930301U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
