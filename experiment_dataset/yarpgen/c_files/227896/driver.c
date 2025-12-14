#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1224090843;
unsigned long long int var_6 = 12891223520773733566ULL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = 436651432;
unsigned long long int var_13 = 16239906682998386448ULL;
unsigned short var_15 = (unsigned short)12667;
int zero = 0;
short var_17 = (short)10886;
short var_18 = (short)4570;
unsigned short var_19 = (unsigned short)49858;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
