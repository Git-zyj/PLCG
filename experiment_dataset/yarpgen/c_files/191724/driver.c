#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 897378061;
int var_2 = 674961610;
unsigned long long int var_5 = 2484043732835965989ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 11468975194555982536ULL;
unsigned char var_11 = (unsigned char)195;
unsigned char var_12 = (unsigned char)129;
long long int var_13 = -6413516438185025321LL;
int var_14 = 1888198211;
long long int var_16 = 8756844296016207785LL;
signed char var_18 = (signed char)101;
int zero = 0;
int var_19 = -235701869;
unsigned short var_20 = (unsigned short)52566;
int var_21 = 1130475241;
unsigned char var_22 = (unsigned char)100;
_Bool var_23 = (_Bool)1;
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
