#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15050;
int var_4 = -710367106;
unsigned short var_5 = (unsigned short)62829;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)19903;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-67;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -4403470817112713717LL;
unsigned int var_22 = 4204723648U;
int var_23 = 1489720493;
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
