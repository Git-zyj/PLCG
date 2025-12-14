#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4019860600531561170LL;
unsigned int var_1 = 1834454630U;
unsigned long long int var_2 = 8950463206339740042ULL;
unsigned char var_3 = (unsigned char)65;
unsigned short var_5 = (unsigned short)50009;
unsigned short var_6 = (unsigned short)51841;
unsigned long long int var_10 = 2954915786775864591ULL;
long long int var_13 = 5558064637298385361LL;
int zero = 0;
short var_14 = (short)29647;
unsigned long long int var_15 = 1900241504108159901ULL;
signed char var_16 = (signed char)-2;
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
