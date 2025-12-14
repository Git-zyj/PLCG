#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28447;
short var_6 = (short)15378;
unsigned short var_15 = (unsigned short)65340;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1075131475592953909LL;
unsigned long long int var_18 = 15806544147953702861ULL;
short var_19 = (short)8588;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
