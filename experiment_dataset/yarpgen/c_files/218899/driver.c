#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
long long int var_16 = 2029368998363022723LL;
unsigned short var_17 = (unsigned short)15489;
unsigned char var_18 = (unsigned char)143;
short var_19 = (short)7524;
int zero = 0;
unsigned short var_20 = (unsigned short)57427;
unsigned char var_21 = (unsigned char)75;
unsigned short var_22 = (unsigned short)33276;
int var_23 = 913556445;
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
