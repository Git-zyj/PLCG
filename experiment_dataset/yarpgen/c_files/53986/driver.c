#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4640540433923196534ULL;
_Bool var_4 = (_Bool)0;
long long int var_7 = 2675081493149083130LL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-20558;
int zero = 0;
short var_15 = (short)3599;
unsigned long long int var_16 = 6690163092057275205ULL;
unsigned long long int var_17 = 7772364554929272777ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
