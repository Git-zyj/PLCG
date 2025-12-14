#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1745889090;
unsigned char var_2 = (unsigned char)175;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_6 = 5803080705982303538LL;
unsigned char var_10 = (unsigned char)51;
signed char var_12 = (signed char)-81;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 16099237410059108272ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1031578037;
int var_21 = 502499096;
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
