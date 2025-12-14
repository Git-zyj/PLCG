#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)27259;
int var_6 = -1182416568;
int var_7 = -341893901;
unsigned int var_9 = 3998162338U;
unsigned int var_11 = 3577861648U;
unsigned int var_13 = 984286556U;
unsigned short var_15 = (unsigned short)46371;
int zero = 0;
unsigned short var_17 = (unsigned short)52081;
int var_18 = 2132225163;
unsigned short var_19 = (unsigned short)33130;
int var_20 = 2122714917;
unsigned int var_21 = 3806077488U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
