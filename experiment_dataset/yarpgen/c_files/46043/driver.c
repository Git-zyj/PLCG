#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15175886322283027663ULL;
long long int var_3 = 5476089471914955579LL;
unsigned long long int var_8 = 11955468292399712849ULL;
long long int var_10 = -6840734900838171162LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_18 = 9030240246991591638LL;
short var_19 = (short)-30302;
short var_20 = (short)12992;
short var_21 = (short)-22694;
void init() {
}

void checksum() {
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
