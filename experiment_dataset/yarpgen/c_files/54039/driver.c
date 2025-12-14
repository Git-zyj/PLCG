#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-99;
unsigned int var_6 = 1606095673U;
signed char var_7 = (signed char)-76;
unsigned short var_9 = (unsigned short)5259;
unsigned short var_13 = (unsigned short)36129;
unsigned short var_15 = (unsigned short)8439;
unsigned int var_17 = 1449916722U;
int zero = 0;
unsigned char var_18 = (unsigned char)12;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-6040;
unsigned short var_21 = (unsigned short)64883;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
