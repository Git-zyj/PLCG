#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -997108666;
long long int var_1 = 5211005554238619500LL;
unsigned int var_2 = 2890798609U;
unsigned short var_7 = (unsigned short)35117;
unsigned short var_10 = (unsigned short)54874;
signed char var_13 = (signed char)-44;
unsigned int var_15 = 2440172776U;
int zero = 0;
unsigned char var_17 = (unsigned char)9;
unsigned int var_18 = 864181819U;
signed char var_19 = (signed char)-81;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
