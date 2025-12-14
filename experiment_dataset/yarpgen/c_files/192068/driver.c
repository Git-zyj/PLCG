#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)120;
short var_11 = (short)-9388;
short var_15 = (short)-25576;
int zero = 0;
long long int var_20 = -7168597585393315517LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3648930766U;
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
