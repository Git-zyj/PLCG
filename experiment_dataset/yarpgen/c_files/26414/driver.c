#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2803136346U;
unsigned short var_2 = (unsigned short)27051;
unsigned short var_4 = (unsigned short)6166;
unsigned int var_6 = 2409368593U;
unsigned char var_9 = (unsigned char)217;
int zero = 0;
unsigned long long int var_12 = 12191919082200937457ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8560451626179904458LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
