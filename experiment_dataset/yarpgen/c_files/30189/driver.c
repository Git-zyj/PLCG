#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31063;
signed char var_4 = (signed char)-67;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)50916;
int zero = 0;
signed char var_20 = (signed char)-79;
unsigned short var_21 = (unsigned short)56756;
long long int var_22 = -1415199249673925114LL;
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
