#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5992;
unsigned long long int var_3 = 275522583194305683ULL;
unsigned long long int var_5 = 5332321891168352986ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 5507768947052283129ULL;
unsigned short var_8 = (unsigned short)689;
_Bool var_9 = (_Bool)1;
int var_12 = -1594626454;
unsigned int var_14 = 2539537121U;
short var_15 = (short)7776;
unsigned int var_16 = 981637624U;
short var_17 = (short)13134;
short var_18 = (short)9004;
int zero = 0;
long long int var_19 = 2821891101615884234LL;
unsigned long long int var_20 = 754887940717997839ULL;
unsigned char var_21 = (unsigned char)40;
int var_22 = 1115347525;
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
