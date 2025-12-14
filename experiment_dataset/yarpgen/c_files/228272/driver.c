#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -1945271886555085740LL;
unsigned int var_3 = 856095865U;
unsigned int var_4 = 1700468052U;
long long int var_5 = -61394650312968750LL;
unsigned char var_7 = (unsigned char)160;
short var_8 = (short)15194;
short var_9 = (short)8743;
_Bool var_10 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_20 = 5283224178022006045LL;
unsigned int var_21 = 4138493304U;
unsigned int var_22 = 1544627839U;
long long int var_23 = -8268104829663841380LL;
void init() {
}

void checksum() {
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
