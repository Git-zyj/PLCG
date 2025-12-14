#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4930597406219666070ULL;
int var_1 = -978484422;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)32392;
long long int var_9 = -2184680896997357272LL;
unsigned char var_16 = (unsigned char)254;
signed char var_17 = (signed char)104;
unsigned short var_19 = (unsigned short)50097;
int zero = 0;
unsigned char var_20 = (unsigned char)124;
signed char var_21 = (signed char)2;
unsigned int var_22 = 1101201554U;
unsigned int var_23 = 3163691077U;
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
