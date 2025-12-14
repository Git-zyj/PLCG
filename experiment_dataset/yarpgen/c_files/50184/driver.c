#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44954;
unsigned short var_1 = (unsigned short)7816;
short var_3 = (short)26023;
int var_4 = 2098825693;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 15216154963536312664ULL;
int var_9 = 1517044036;
_Bool var_10 = (_Bool)0;
long long int var_16 = 1676653245186165396LL;
int zero = 0;
int var_17 = 315497249;
long long int var_18 = 5362884286302712424LL;
long long int var_19 = 8023393156401625127LL;
short var_20 = (short)-31252;
short var_21 = (short)32228;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
