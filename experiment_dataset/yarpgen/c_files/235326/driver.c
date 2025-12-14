#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11994;
int var_1 = -1382570598;
signed char var_3 = (signed char)-73;
signed char var_4 = (signed char)-41;
long long int var_5 = 9065054563234318384LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)133;
unsigned long long int var_9 = 15811151741559600080ULL;
unsigned long long int var_10 = 9219654212041341050ULL;
short var_12 = (short)22726;
_Bool var_13 = (_Bool)1;
long long int var_14 = 7666875954238574943LL;
int zero = 0;
unsigned short var_15 = (unsigned short)63828;
long long int var_16 = -2946658195317614593LL;
unsigned short var_17 = (unsigned short)50412;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
