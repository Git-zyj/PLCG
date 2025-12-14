#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2023624874411089244ULL;
unsigned char var_3 = (unsigned char)127;
signed char var_6 = (signed char)-2;
signed char var_10 = (signed char)25;
unsigned short var_11 = (unsigned short)52858;
unsigned short var_13 = (unsigned short)62352;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = -391086086;
unsigned long long int var_16 = 986088009428483016ULL;
unsigned char var_17 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
