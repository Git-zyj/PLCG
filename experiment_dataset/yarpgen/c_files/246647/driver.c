#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6801827988698090696LL;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)72;
unsigned int var_5 = 1825608297U;
unsigned int var_6 = 3975943479U;
long long int var_7 = -3623351529815301839LL;
signed char var_10 = (signed char)-27;
int zero = 0;
short var_15 = (short)-12735;
short var_16 = (short)12375;
unsigned short var_17 = (unsigned short)11643;
short var_18 = (short)-14493;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
