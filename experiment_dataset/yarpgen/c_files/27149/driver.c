#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
signed char var_2 = (signed char)20;
unsigned short var_3 = (unsigned short)13725;
unsigned long long int var_4 = 3394876906605587278ULL;
unsigned int var_6 = 1057660159U;
unsigned char var_7 = (unsigned char)64;
long long int var_9 = -2057193148594537266LL;
unsigned int var_11 = 2656278244U;
short var_14 = (short)7985;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
