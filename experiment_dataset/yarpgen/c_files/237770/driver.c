#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -107025267667548737LL;
unsigned char var_3 = (unsigned char)90;
signed char var_5 = (signed char)48;
signed char var_7 = (signed char)36;
signed char var_9 = (signed char)-49;
signed char var_15 = (signed char)-108;
short var_17 = (short)-20643;
int zero = 0;
signed char var_20 = (signed char)-55;
unsigned char var_21 = (unsigned char)244;
_Bool var_22 = (_Bool)1;
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
