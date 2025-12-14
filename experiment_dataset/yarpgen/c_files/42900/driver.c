#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -2143932886;
signed char var_2 = (signed char)96;
long long int var_6 = 5890369687569274394LL;
int var_7 = -475689546;
long long int var_8 = 8499032825820627908LL;
signed char var_11 = (signed char)88;
long long int var_12 = 6340192672348637007LL;
int zero = 0;
long long int var_13 = 4846224816762401420LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -19007359769490610LL;
unsigned int var_16 = 856566941U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
