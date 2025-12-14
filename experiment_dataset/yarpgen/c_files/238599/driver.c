#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59219;
unsigned short var_3 = (unsigned short)22647;
_Bool var_4 = (_Bool)1;
long long int var_6 = 76057297615023022LL;
unsigned short var_9 = (unsigned short)51596;
int var_10 = 1205494858;
int zero = 0;
signed char var_14 = (signed char)84;
long long int var_15 = 1373351110422126772LL;
long long int var_16 = -8062089391361999767LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
