#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1168445542604359583LL;
long long int var_6 = -8406617395155508418LL;
long long int var_7 = -6422032293817053019LL;
unsigned int var_13 = 836879966U;
int zero = 0;
unsigned short var_17 = (unsigned short)36465;
unsigned short var_18 = (unsigned short)40560;
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
