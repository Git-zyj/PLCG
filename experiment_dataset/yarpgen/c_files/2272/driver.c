#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32442;
_Bool var_6 = (_Bool)1;
unsigned char var_11 = (unsigned char)167;
long long int var_16 = 1322801619149769876LL;
unsigned short var_17 = (unsigned short)53926;
int zero = 0;
int var_19 = -784087781;
int var_20 = -603975052;
_Bool var_21 = (_Bool)1;
long long int var_22 = -3280848817358977743LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
