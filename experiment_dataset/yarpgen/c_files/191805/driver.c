#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15488;
_Bool var_3 = (_Bool)0;
long long int var_4 = -7082405149806269465LL;
unsigned char var_5 = (unsigned char)49;
unsigned short var_7 = (unsigned short)10452;
unsigned int var_8 = 488298200U;
signed char var_11 = (signed char)15;
long long int var_16 = -1376457488826109537LL;
long long int var_17 = 573319654173085856LL;
int zero = 0;
int var_19 = -262173010;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)248;
int var_22 = -655480262;
signed char var_23 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
