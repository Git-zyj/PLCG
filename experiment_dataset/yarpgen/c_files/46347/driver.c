#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 402657042U;
short var_2 = (short)26035;
signed char var_3 = (signed char)51;
short var_10 = (short)12985;
unsigned int var_12 = 321655849U;
long long int var_16 = -3367745106841081169LL;
int var_17 = 1296762849;
short var_19 = (short)5746;
int zero = 0;
signed char var_20 = (signed char)-73;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
int var_23 = -1745976029;
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
