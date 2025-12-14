#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32099;
short var_2 = (short)-959;
int var_3 = -1819673280;
unsigned short var_8 = (unsigned short)52071;
unsigned char var_16 = (unsigned char)57;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_20 = -1832065755;
int var_21 = -857222186;
unsigned long long int var_22 = 10658290086255795745ULL;
int var_23 = -1124592975;
unsigned int var_24 = 246800748U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
