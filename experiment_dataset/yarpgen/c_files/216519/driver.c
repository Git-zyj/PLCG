#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -980413332;
unsigned short var_8 = (unsigned short)45386;
unsigned int var_10 = 3546496038U;
unsigned long long int var_19 = 3788248517691927554ULL;
int zero = 0;
unsigned int var_20 = 1697451730U;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 10452094298591069358ULL;
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
