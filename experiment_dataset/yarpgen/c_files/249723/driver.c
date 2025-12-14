#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3263515369U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-111;
int var_5 = 132120247;
signed char var_6 = (signed char)-39;
unsigned int var_10 = 2566517105U;
short var_12 = (short)18889;
unsigned char var_14 = (unsigned char)245;
long long int var_15 = 2977600339144471786LL;
unsigned int var_16 = 2299946425U;
signed char var_18 = (signed char)-83;
int zero = 0;
unsigned int var_19 = 2736160980U;
_Bool var_20 = (_Bool)0;
long long int var_21 = -6441140472308238332LL;
void init() {
}

void checksum() {
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
