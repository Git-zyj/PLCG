#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5936379405657831799LL;
signed char var_3 = (signed char)-105;
short var_9 = (short)-7193;
unsigned short var_10 = (unsigned short)55070;
long long int var_13 = 6252024258096500143LL;
int zero = 0;
int var_19 = 791383586;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)24783;
long long int var_22 = -6230541195230723934LL;
unsigned short var_23 = (unsigned short)23214;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
