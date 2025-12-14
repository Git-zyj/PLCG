#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 73191841U;
_Bool var_1 = (_Bool)1;
long long int var_2 = 5518666438125469006LL;
unsigned long long int var_3 = 1506682642646179060ULL;
unsigned int var_8 = 3253019608U;
signed char var_10 = (signed char)-119;
unsigned short var_11 = (unsigned short)10828;
unsigned char var_13 = (unsigned char)83;
unsigned int var_16 = 4099040452U;
int zero = 0;
unsigned int var_20 = 4183701404U;
int var_21 = -72362680;
unsigned long long int var_22 = 4356991880529618293ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
