#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1461188184827158898LL;
_Bool var_1 = (_Bool)0;
long long int var_3 = 6391248826759976467LL;
unsigned char var_4 = (unsigned char)143;
unsigned char var_8 = (unsigned char)235;
int zero = 0;
signed char var_10 = (signed char)126;
short var_11 = (short)-4104;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
