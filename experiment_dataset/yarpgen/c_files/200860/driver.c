#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5616669108474051702LL;
unsigned char var_5 = (unsigned char)44;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)19;
unsigned short var_10 = (unsigned short)6430;
_Bool var_11 = (_Bool)0;
int var_12 = -260027522;
unsigned long long int var_13 = 3425642709519367320ULL;
short var_14 = (short)-21578;
unsigned short var_15 = (unsigned short)15848;
int zero = 0;
signed char var_20 = (signed char)66;
long long int var_21 = 979123860505916110LL;
short var_22 = (short)24552;
signed char var_23 = (signed char)79;
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
