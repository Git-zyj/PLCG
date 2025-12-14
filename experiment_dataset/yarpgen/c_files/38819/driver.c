#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6290465625468496705LL;
unsigned char var_12 = (unsigned char)4;
long long int var_16 = -7873043115231590043LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -3419928457553024100LL;
void init() {
}

void checksum() {
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
