#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
short var_1 = (short)29648;
unsigned long long int var_2 = 17664708681821096520ULL;
short var_4 = (short)17191;
unsigned char var_5 = (unsigned char)78;
unsigned short var_6 = (unsigned short)36337;
long long int var_7 = -6974419673114031732LL;
long long int var_8 = 4859268592995397458LL;
int var_9 = 995669640;
unsigned short var_10 = (unsigned short)1642;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -1909697127;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
