#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6967968334154213428ULL;
signed char var_2 = (signed char)-123;
unsigned long long int var_3 = 17125998177726529595ULL;
unsigned int var_6 = 2170109772U;
unsigned char var_9 = (unsigned char)190;
unsigned long long int var_10 = 8393948217074092381ULL;
unsigned long long int var_11 = 2686483381296321726ULL;
unsigned char var_12 = (unsigned char)118;
_Bool var_15 = (_Bool)0;
unsigned int var_18 = 860900166U;
int zero = 0;
unsigned short var_19 = (unsigned short)56058;
unsigned int var_20 = 1355970201U;
signed char var_21 = (signed char)28;
short var_22 = (short)-26626;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
