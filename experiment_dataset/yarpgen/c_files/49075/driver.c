#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)60351;
unsigned char var_3 = (unsigned char)170;
unsigned char var_5 = (unsigned char)56;
int zero = 0;
unsigned char var_12 = (unsigned char)217;
unsigned short var_13 = (unsigned short)35240;
signed char var_14 = (signed char)81;
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
