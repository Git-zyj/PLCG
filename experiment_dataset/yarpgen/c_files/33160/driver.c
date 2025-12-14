#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2115892402;
unsigned short var_6 = (unsigned short)65003;
unsigned long long int var_12 = 7622924637296112270ULL;
signed char var_15 = (signed char)-114;
_Bool var_16 = (_Bool)0;
unsigned int var_18 = 4047950400U;
int zero = 0;
unsigned int var_20 = 453495384U;
unsigned short var_21 = (unsigned short)57890;
void init() {
}

void checksum() {
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
