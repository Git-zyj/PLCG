#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 161321716U;
unsigned long long int var_4 = 17962674486608414926ULL;
int var_5 = 1670403420;
short var_6 = (short)-9760;
long long int var_9 = -3677436818276751158LL;
short var_14 = (short)-8473;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 880023877029818585ULL;
int zero = 0;
unsigned int var_18 = 2827079577U;
unsigned long long int var_19 = 17202214020357786286ULL;
unsigned long long int var_20 = 7295785316475055706ULL;
unsigned long long int var_21 = 16125552293930704094ULL;
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
