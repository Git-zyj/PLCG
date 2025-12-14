#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
unsigned char var_2 = (unsigned char)221;
long long int var_4 = 7243533518949698240LL;
unsigned short var_5 = (unsigned short)60738;
unsigned long long int var_10 = 2006198028279234339ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 428609012913353034ULL;
signed char var_16 = (signed char)63;
signed char var_17 = (signed char)109;
unsigned char var_18 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
