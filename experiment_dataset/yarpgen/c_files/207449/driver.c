#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27204;
short var_5 = (short)22693;
short var_7 = (short)-19405;
unsigned short var_11 = (unsigned short)20514;
short var_14 = (short)9426;
int zero = 0;
signed char var_20 = (signed char)114;
signed char var_21 = (signed char)101;
_Bool var_22 = (_Bool)1;
long long int var_23 = -6620905976208607917LL;
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
