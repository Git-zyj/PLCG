#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56759;
signed char var_2 = (signed char)106;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)32136;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)60610;
unsigned short var_9 = (unsigned short)44182;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-13;
unsigned char var_12 = (unsigned char)243;
long long int var_13 = -7205384191862228380LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
