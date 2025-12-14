#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1522619385;
short var_7 = (short)21458;
unsigned short var_9 = (unsigned short)7512;
unsigned char var_11 = (unsigned char)210;
unsigned long long int var_13 = 14701978114906574186ULL;
unsigned long long int var_15 = 10187850479844953936ULL;
int zero = 0;
int var_18 = 2115190820;
signed char var_19 = (signed char)-9;
long long int var_20 = -7789200801152039336LL;
unsigned short var_21 = (unsigned short)19819;
_Bool var_22 = (_Bool)0;
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
