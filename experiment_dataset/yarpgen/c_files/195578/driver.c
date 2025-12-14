#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60147;
signed char var_1 = (signed char)-13;
short var_5 = (short)-12481;
_Bool var_9 = (_Bool)0;
long long int var_10 = -403644002208817607LL;
unsigned short var_13 = (unsigned short)50164;
int var_17 = 930787207;
int zero = 0;
unsigned int var_19 = 3339292851U;
int var_20 = -81027113;
unsigned int var_21 = 3426961046U;
void init() {
}

void checksum() {
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
