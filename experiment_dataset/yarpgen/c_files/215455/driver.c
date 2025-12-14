#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-108;
short var_3 = (short)1080;
signed char var_4 = (signed char)-67;
int var_7 = -11659479;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 11235570630554445093ULL;
unsigned int var_13 = 3111807082U;
signed char var_14 = (signed char)100;
unsigned short var_17 = (unsigned short)28575;
int zero = 0;
unsigned int var_18 = 1632168806U;
unsigned short var_19 = (unsigned short)36050;
long long int var_20 = -6202116049799160162LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
