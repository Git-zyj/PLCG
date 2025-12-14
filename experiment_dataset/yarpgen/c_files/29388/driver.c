#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -753841773;
signed char var_5 = (signed char)19;
unsigned int var_8 = 642189990U;
int var_9 = -77938524;
unsigned short var_11 = (unsigned short)53221;
unsigned int var_16 = 3068039678U;
unsigned char var_18 = (unsigned char)145;
int zero = 0;
short var_19 = (short)24983;
unsigned int var_20 = 159473475U;
unsigned char var_21 = (unsigned char)80;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
