#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3450;
short var_3 = (short)18486;
short var_4 = (short)-23242;
int var_5 = 434172716;
int var_7 = -341496434;
unsigned long long int var_9 = 17684251524758416692ULL;
signed char var_10 = (signed char)-60;
short var_11 = (short)-15301;
short var_14 = (short)-20597;
int zero = 0;
int var_17 = -975058042;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
