#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23064;
short var_2 = (short)-15457;
unsigned char var_3 = (unsigned char)230;
long long int var_4 = -7697428645286527681LL;
unsigned long long int var_5 = 3552830357781427528ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-69;
short var_8 = (short)-4136;
unsigned short var_9 = (unsigned short)27310;
int var_10 = -1775361064;
int zero = 0;
long long int var_16 = 5831344413206650660LL;
short var_17 = (short)14378;
unsigned char var_18 = (unsigned char)90;
short var_19 = (short)-11497;
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
