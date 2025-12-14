#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned short var_7 = (unsigned short)27858;
unsigned int var_8 = 573651091U;
unsigned char var_9 = (unsigned char)207;
unsigned int var_13 = 171553334U;
unsigned char var_14 = (unsigned char)201;
long long int var_16 = -1951051724167721369LL;
int zero = 0;
unsigned short var_18 = (unsigned short)54467;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
