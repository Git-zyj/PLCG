#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
short var_5 = (short)6154;
unsigned long long int var_6 = 9645235013710076841ULL;
long long int var_8 = 8203005406794374402LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)120;
signed char var_13 = (signed char)-116;
unsigned short var_16 = (unsigned short)30882;
long long int var_17 = -6289573465474120159LL;
int zero = 0;
unsigned char var_18 = (unsigned char)131;
unsigned long long int var_19 = 16290744127155916780ULL;
unsigned int var_20 = 2786422909U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)51765;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
