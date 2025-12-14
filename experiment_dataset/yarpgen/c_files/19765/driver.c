#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9015883647063004310ULL;
unsigned short var_6 = (unsigned short)60471;
signed char var_7 = (signed char)-58;
unsigned char var_10 = (unsigned char)116;
unsigned short var_11 = (unsigned short)34775;
signed char var_15 = (signed char)-109;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1850091906;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
