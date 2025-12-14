#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3336489917U;
unsigned int var_5 = 3216501187U;
int var_7 = 414019301;
unsigned short var_8 = (unsigned short)10382;
_Bool var_9 = (_Bool)1;
int var_10 = -1798592622;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 1293232455U;
_Bool var_15 = (_Bool)1;
int var_18 = 1872828134;
int zero = 0;
signed char var_20 = (signed char)-6;
int var_21 = 850296581;
short var_22 = (short)25311;
unsigned char var_23 = (unsigned char)1;
unsigned int var_24 = 664683283U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
