#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8588114318078453089ULL;
unsigned int var_1 = 3099144320U;
int var_4 = 843538085;
unsigned long long int var_7 = 2035979628359099880ULL;
unsigned int var_8 = 2382780343U;
unsigned short var_10 = (unsigned short)16704;
unsigned int var_11 = 754238712U;
long long int var_12 = -9064656087085227987LL;
long long int var_13 = 7157964032440480488LL;
_Bool var_14 = (_Bool)1;
short var_17 = (short)-3065;
int zero = 0;
unsigned short var_18 = (unsigned short)27512;
short var_19 = (short)18576;
void init() {
}

void checksum() {
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
