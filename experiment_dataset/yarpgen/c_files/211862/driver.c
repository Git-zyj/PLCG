#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6804454199841474898LL;
unsigned char var_5 = (unsigned char)29;
long long int var_8 = 4139705576964585021LL;
short var_10 = (short)-13203;
short var_13 = (short)-30141;
int zero = 0;
long long int var_17 = -6749303568768512489LL;
long long int var_18 = 5371163718572818871LL;
long long int var_19 = -3072879539149195117LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
