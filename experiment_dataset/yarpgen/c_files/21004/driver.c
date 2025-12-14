#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
int var_1 = -539550379;
unsigned long long int var_2 = 9165954023634507130ULL;
int var_3 = -417204228;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 1495468678421354636ULL;
unsigned int var_6 = 223307286U;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)17396;
unsigned int var_10 = 1961027590U;
int zero = 0;
unsigned char var_11 = (unsigned char)107;
long long int var_12 = -6787595560309843597LL;
unsigned char var_13 = (unsigned char)42;
long long int var_14 = -7678211824050865470LL;
short var_15 = (short)-30501;
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
