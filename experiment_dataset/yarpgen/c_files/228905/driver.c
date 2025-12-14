#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43451;
unsigned char var_6 = (unsigned char)180;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)-33;
int zero = 0;
long long int var_20 = -8628889437129106268LL;
unsigned short var_21 = (unsigned short)16379;
_Bool var_22 = (_Bool)0;
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
