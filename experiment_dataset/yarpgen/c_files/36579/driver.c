#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13924470948593054054ULL;
unsigned short var_1 = (unsigned short)4295;
unsigned int var_2 = 187588761U;
int var_3 = 1558863077;
long long int var_4 = 2814956834580593862LL;
long long int var_5 = -7723488881940216631LL;
unsigned short var_6 = (unsigned short)6241;
short var_7 = (short)-12223;
signed char var_9 = (signed char)-44;
long long int var_10 = 690182761959190470LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 7754007719461744328ULL;
unsigned short var_14 = (unsigned short)56578;
unsigned short var_15 = (unsigned short)56522;
short var_16 = (short)-14358;
unsigned char var_17 = (unsigned char)170;
long long int var_18 = 5046806159938934648LL;
unsigned long long int var_19 = 6243766971191902892ULL;
int zero = 0;
int var_20 = -1250628962;
short var_21 = (short)-18198;
unsigned int var_22 = 2521423714U;
signed char var_23 = (signed char)113;
void init() {
}

void checksum() {
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
