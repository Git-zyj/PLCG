#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4066455198U;
long long int var_3 = -2943482389233227978LL;
long long int var_4 = 1138935259199562948LL;
unsigned char var_5 = (unsigned char)87;
unsigned int var_7 = 3383670506U;
unsigned char var_9 = (unsigned char)245;
unsigned short var_10 = (unsigned short)50787;
signed char var_11 = (signed char)-66;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)167;
signed char var_17 = (signed char)43;
int zero = 0;
unsigned short var_20 = (unsigned short)41506;
unsigned short var_21 = (unsigned short)23603;
_Bool var_22 = (_Bool)0;
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
