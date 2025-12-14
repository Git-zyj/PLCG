#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1327178571840141354ULL;
long long int var_5 = -2999965891551776051LL;
short var_10 = (short)-12352;
_Bool var_11 = (_Bool)1;
long long int var_12 = 3725609144002514342LL;
int zero = 0;
unsigned long long int var_13 = 13830321220066591685ULL;
signed char var_14 = (signed char)78;
signed char var_15 = (signed char)-48;
signed char var_16 = (signed char)-86;
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
