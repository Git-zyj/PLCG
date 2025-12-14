#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
signed char var_1 = (signed char)67;
unsigned char var_4 = (unsigned char)149;
signed char var_6 = (signed char)86;
unsigned char var_7 = (unsigned char)56;
int var_9 = -513453726;
unsigned char var_10 = (unsigned char)235;
int var_13 = -29263697;
long long int var_14 = 7488887522138729679LL;
int zero = 0;
signed char var_17 = (signed char)108;
unsigned char var_18 = (unsigned char)66;
int var_19 = 203082499;
unsigned int var_20 = 962291108U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
