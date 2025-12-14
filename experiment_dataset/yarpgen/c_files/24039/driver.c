#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2419087716487846522LL;
unsigned char var_2 = (unsigned char)13;
int var_4 = -120152113;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-48;
unsigned short var_10 = (unsigned short)48772;
short var_16 = (short)6472;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 861933969U;
signed char var_19 = (signed char)-36;
void init() {
}

void checksum() {
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
