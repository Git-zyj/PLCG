#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15411283209792061658ULL;
unsigned int var_3 = 977879600U;
unsigned int var_4 = 3029295548U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-22507;
signed char var_10 = (signed char)19;
int zero = 0;
unsigned int var_16 = 4145878099U;
unsigned long long int var_17 = 5518456882089085593ULL;
int var_18 = -156514145;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
