#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 3194349876867378065LL;
long long int var_2 = 5199936881015040630LL;
unsigned char var_3 = (unsigned char)64;
unsigned int var_6 = 788393693U;
signed char var_8 = (signed char)-63;
signed char var_10 = (signed char)(-127 - 1);
signed char var_11 = (signed char)-76;
int zero = 0;
unsigned short var_12 = (unsigned short)50855;
long long int var_13 = -1763905053228519181LL;
long long int var_14 = -9069836418558409072LL;
long long int var_15 = -3647864402933157277LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
