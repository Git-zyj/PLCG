#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4590490763703588071LL;
unsigned short var_5 = (unsigned short)47379;
unsigned short var_10 = (unsigned short)8391;
unsigned char var_11 = (unsigned char)61;
unsigned short var_14 = (unsigned short)36197;
unsigned int var_16 = 2320798151U;
_Bool var_17 = (_Bool)1;
int var_18 = -588723665;
int zero = 0;
short var_19 = (short)-18058;
long long int var_20 = -4268440433099673625LL;
short var_21 = (short)-18417;
unsigned short var_22 = (unsigned short)27666;
unsigned char var_23 = (unsigned char)116;
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
