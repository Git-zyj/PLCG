#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)53;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2495596056U;
unsigned int var_6 = 3301483990U;
short var_7 = (short)-3588;
unsigned long long int var_8 = 12865817395319500952ULL;
unsigned long long int var_9 = 15828860206974231893ULL;
short var_11 = (short)-20847;
unsigned long long int var_12 = 4722729081366918630ULL;
unsigned long long int var_13 = 15966484468267162925ULL;
int zero = 0;
unsigned long long int var_14 = 3068709906283562755ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 390878341U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
