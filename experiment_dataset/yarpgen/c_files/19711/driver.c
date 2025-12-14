#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 166791211U;
int var_2 = 1077698823;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 4297850716660216167ULL;
unsigned char var_6 = (unsigned char)239;
unsigned int var_7 = 816886874U;
signed char var_8 = (signed char)121;
short var_9 = (short)18996;
unsigned char var_10 = (unsigned char)209;
int zero = 0;
long long int var_12 = -2344230681752490064LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 2923147177506533989ULL;
short var_15 = (short)-11468;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
