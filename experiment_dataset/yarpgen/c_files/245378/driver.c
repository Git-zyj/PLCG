#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-374;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_6 = (short)30243;
unsigned long long int var_7 = 513050215083079266ULL;
short var_8 = (short)-6337;
unsigned long long int var_9 = 4703950742871901370ULL;
unsigned short var_12 = (unsigned short)53675;
short var_13 = (short)-31630;
int zero = 0;
unsigned short var_14 = (unsigned short)14116;
short var_15 = (short)-6872;
short var_16 = (short)31922;
int var_17 = -303706115;
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
