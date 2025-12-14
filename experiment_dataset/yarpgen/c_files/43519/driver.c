#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2492812956U;
signed char var_7 = (signed char)-28;
unsigned long long int var_8 = 1476409495146589275ULL;
unsigned long long int var_11 = 12117073644635744735ULL;
unsigned char var_13 = (unsigned char)54;
unsigned short var_16 = (unsigned short)3879;
int zero = 0;
unsigned short var_20 = (unsigned short)51197;
unsigned short var_21 = (unsigned short)14620;
void init() {
}

void checksum() {
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
