#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1579394311;
unsigned short var_1 = (unsigned short)6840;
unsigned short var_2 = (unsigned short)22803;
long long int var_6 = 3986408200186937976LL;
unsigned short var_8 = (unsigned short)35220;
unsigned char var_10 = (unsigned char)120;
unsigned long long int var_11 = 13982261870280606915ULL;
unsigned int var_13 = 794169379U;
int zero = 0;
unsigned short var_17 = (unsigned short)30633;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)22605;
unsigned short var_20 = (unsigned short)793;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
