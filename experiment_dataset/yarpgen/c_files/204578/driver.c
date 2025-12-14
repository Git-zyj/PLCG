#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8127260738173892524LL;
unsigned int var_3 = 2143655274U;
unsigned char var_5 = (unsigned char)92;
signed char var_8 = (signed char)-98;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)25446;
unsigned short var_17 = (unsigned short)6926;
long long int var_18 = -8995934591534733818LL;
long long int var_19 = 67059976105518099LL;
int zero = 0;
int var_20 = 2038768377;
int var_21 = -1961861215;
unsigned char var_22 = (unsigned char)110;
_Bool var_23 = (_Bool)0;
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
