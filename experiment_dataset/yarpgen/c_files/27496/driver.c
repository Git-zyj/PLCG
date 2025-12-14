#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)10821;
unsigned int var_7 = 2349203516U;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)39109;
int var_15 = -1683640483;
unsigned int var_18 = 2069041395U;
int zero = 0;
unsigned int var_19 = 140032537U;
unsigned char var_20 = (unsigned char)177;
long long int var_21 = -7317156645336756484LL;
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
