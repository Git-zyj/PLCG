#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 433919723U;
long long int var_1 = 1211190936491338526LL;
unsigned short var_4 = (unsigned short)56471;
unsigned long long int var_7 = 10169083831653277537ULL;
signed char var_8 = (signed char)71;
unsigned short var_16 = (unsigned short)48118;
signed char var_17 = (signed char)-20;
int zero = 0;
signed char var_20 = (signed char)97;
unsigned char var_21 = (unsigned char)255;
signed char var_22 = (signed char)-34;
unsigned int var_23 = 3802033854U;
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
