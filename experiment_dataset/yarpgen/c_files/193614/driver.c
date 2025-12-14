#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
unsigned short var_3 = (unsigned short)62799;
short var_4 = (short)5241;
unsigned short var_7 = (unsigned short)15961;
unsigned char var_12 = (unsigned char)56;
int zero = 0;
unsigned char var_19 = (unsigned char)251;
long long int var_20 = 5126574100039853113LL;
short var_21 = (short)15086;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
