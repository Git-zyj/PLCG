#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)210;
short var_5 = (short)3704;
int var_6 = -1870398543;
unsigned short var_8 = (unsigned short)29805;
_Bool var_10 = (_Bool)0;
long long int var_11 = -6651817610411261033LL;
unsigned short var_12 = (unsigned short)21031;
long long int var_15 = -1077276380218947559LL;
int zero = 0;
int var_16 = 856550457;
long long int var_17 = 2336779875165674689LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
