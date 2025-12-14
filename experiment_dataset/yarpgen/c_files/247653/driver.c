#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3891696268222955458LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)223;
int zero = 0;
unsigned char var_15 = (unsigned char)180;
short var_16 = (short)-11932;
unsigned char var_17 = (unsigned char)217;
signed char var_18 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
