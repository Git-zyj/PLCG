#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = 834319800;
unsigned short var_7 = (unsigned short)58205;
short var_9 = (short)22617;
int zero = 0;
unsigned char var_13 = (unsigned char)118;
_Bool var_14 = (_Bool)0;
long long int var_15 = -9155714061709426615LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
