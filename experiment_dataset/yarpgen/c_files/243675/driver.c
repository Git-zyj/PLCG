#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1833070753U;
unsigned short var_2 = (unsigned short)26714;
_Bool var_3 = (_Bool)1;
short var_5 = (short)25725;
unsigned long long int var_7 = 8306889159995129924ULL;
unsigned char var_8 = (unsigned char)221;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-12136;
unsigned int var_12 = 1651357201U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
