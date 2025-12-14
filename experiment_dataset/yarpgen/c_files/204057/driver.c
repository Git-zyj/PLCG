#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -193248517435689067LL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -3881127906402795688LL;
int zero = 0;
long long int var_10 = 7696192126171858182LL;
short var_11 = (short)-13876;
unsigned short var_12 = (unsigned short)172;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
