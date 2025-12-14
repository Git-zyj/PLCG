#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -651664441;
unsigned long long int var_2 = 16019704962428342386ULL;
int var_5 = -1186410637;
long long int var_7 = 4044336115167447819LL;
unsigned char var_11 = (unsigned char)45;
unsigned char var_13 = (unsigned char)111;
unsigned int var_15 = 3423565414U;
int zero = 0;
unsigned char var_16 = (unsigned char)233;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)7594;
unsigned long long int var_19 = 4033034460748293437ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
