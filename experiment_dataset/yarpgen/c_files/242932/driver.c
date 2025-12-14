#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56092;
unsigned char var_1 = (unsigned char)142;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2182369273U;
_Bool var_5 = (_Bool)0;
long long int var_7 = 1746263781156040303LL;
signed char var_8 = (signed char)-115;
unsigned int var_10 = 1577117113U;
int zero = 0;
unsigned long long int var_11 = 8428196633863823938ULL;
short var_12 = (short)2876;
unsigned char var_13 = (unsigned char)1;
unsigned short var_14 = (unsigned short)64773;
unsigned short var_15 = (unsigned short)46183;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
