#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2269626565U;
unsigned short var_7 = (unsigned short)53200;
long long int var_14 = -5952588013388143108LL;
unsigned int var_16 = 2060184305U;
short var_17 = (short)20875;
unsigned char var_19 = (unsigned char)111;
int zero = 0;
unsigned short var_20 = (unsigned short)39297;
int var_21 = -1620861984;
signed char var_22 = (signed char)119;
void init() {
}

void checksum() {
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
