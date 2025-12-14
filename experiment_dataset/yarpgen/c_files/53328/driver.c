#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1378292348;
long long int var_5 = 5893808821359085760LL;
unsigned short var_6 = (unsigned short)20110;
signed char var_7 = (signed char)-17;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 799445900;
unsigned char var_13 = (unsigned char)220;
long long int var_14 = 8788257231744638476LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
