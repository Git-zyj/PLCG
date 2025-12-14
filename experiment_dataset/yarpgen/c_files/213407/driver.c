#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8728;
long long int var_15 = -1955051161879278666LL;
short var_18 = (short)-25597;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-9488;
long long int var_21 = 3776451257598508215LL;
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
