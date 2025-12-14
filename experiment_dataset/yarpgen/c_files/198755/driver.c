#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2055667227U;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)49378;
unsigned int var_6 = 984040664U;
int var_7 = 2012788033;
long long int var_9 = -678009253585043639LL;
unsigned short var_10 = (unsigned short)1593;
_Bool var_12 = (_Bool)0;
unsigned long long int var_16 = 2871517818279528209ULL;
int zero = 0;
long long int var_18 = 6774435234895324961LL;
unsigned char var_19 = (unsigned char)204;
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
