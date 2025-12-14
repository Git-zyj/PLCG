#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)42;
long long int var_2 = -1000389813939944644LL;
_Bool var_5 = (_Bool)1;
int var_7 = 1874242938;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)17412;
signed char var_13 = (signed char)116;
short var_14 = (short)-26906;
unsigned short var_15 = (unsigned short)56290;
unsigned int var_16 = 2574485862U;
int zero = 0;
unsigned char var_17 = (unsigned char)170;
signed char var_18 = (signed char)73;
int var_19 = 1636282071;
unsigned long long int var_20 = 57021779441850682ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
