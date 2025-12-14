#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_5 = 1126105937U;
unsigned short var_6 = (unsigned short)39739;
unsigned short var_7 = (unsigned short)1217;
long long int var_9 = -6053628281795179341LL;
unsigned int var_10 = 2262049568U;
unsigned short var_11 = (unsigned short)62611;
short var_12 = (short)22841;
unsigned char var_13 = (unsigned char)127;
long long int var_15 = 6590741098976494822LL;
int zero = 0;
short var_16 = (short)-29259;
unsigned char var_17 = (unsigned char)153;
void init() {
}

void checksum() {
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
