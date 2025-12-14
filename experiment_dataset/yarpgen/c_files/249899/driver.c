#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)52;
unsigned short var_11 = (unsigned short)22402;
signed char var_12 = (signed char)45;
long long int var_13 = 1678241096569994906LL;
long long int var_14 = 6893312030874481231LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1787898665;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
