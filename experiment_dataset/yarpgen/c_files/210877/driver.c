#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3023;
signed char var_2 = (signed char)11;
signed char var_3 = (signed char)-70;
long long int var_6 = 989577573373416958LL;
int var_9 = 1348443541;
signed char var_12 = (signed char)22;
signed char var_13 = (signed char)-6;
short var_15 = (short)-13062;
int zero = 0;
long long int var_16 = -4010986306629124807LL;
unsigned int var_17 = 855965657U;
short var_18 = (short)-1724;
unsigned long long int var_19 = 14178401073478814474ULL;
int var_20 = -291558932;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
