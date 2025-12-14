#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_4 = (unsigned char)138;
unsigned short var_5 = (unsigned short)56797;
signed char var_7 = (signed char)103;
unsigned char var_16 = (unsigned char)198;
int zero = 0;
unsigned char var_19 = (unsigned char)153;
long long int var_20 = -7737566780149026359LL;
short var_21 = (short)1199;
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
