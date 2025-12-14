#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5021;
short var_3 = (short)-18416;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1070786458U;
unsigned short var_8 = (unsigned short)38376;
short var_9 = (short)-14540;
signed char var_10 = (signed char)-85;
unsigned int var_11 = 1567746738U;
long long int var_12 = 2850282365518201068LL;
long long int var_13 = -2925663457610087948LL;
unsigned int var_16 = 1182397848U;
unsigned int var_17 = 41712795U;
int zero = 0;
signed char var_18 = (signed char)12;
unsigned long long int var_19 = 491536208321412777ULL;
short var_20 = (short)-6456;
unsigned long long int var_21 = 10355448420869960316ULL;
unsigned int var_22 = 3969440125U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
