#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5344137923377397144LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 18342699144947474414ULL;
long long int var_5 = -714722376090028221LL;
signed char var_7 = (signed char)-126;
unsigned short var_8 = (unsigned short)24486;
unsigned int var_9 = 3952775171U;
long long int var_10 = 3592536969094707618LL;
signed char var_15 = (signed char)-34;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)39930;
unsigned char var_18 = (unsigned char)82;
_Bool var_19 = (_Bool)0;
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
