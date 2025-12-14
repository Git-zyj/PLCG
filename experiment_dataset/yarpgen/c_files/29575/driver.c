#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1629439031;
int var_2 = 1594426171;
signed char var_3 = (signed char)-60;
_Bool var_4 = (_Bool)1;
short var_5 = (short)6427;
signed char var_6 = (signed char)-109;
unsigned long long int var_7 = 7898708125885898649ULL;
unsigned short var_8 = (unsigned short)27203;
unsigned long long int var_11 = 16972733954964188900ULL;
unsigned long long int var_12 = 9400626447589456497ULL;
short var_13 = (short)14795;
int zero = 0;
unsigned int var_14 = 3779450531U;
signed char var_15 = (signed char)-75;
unsigned long long int var_16 = 15390242527828258622ULL;
int var_17 = 763004772;
signed char var_18 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
