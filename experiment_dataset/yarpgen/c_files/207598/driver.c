#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 926725639;
unsigned char var_1 = (unsigned char)89;
unsigned char var_2 = (unsigned char)63;
signed char var_3 = (signed char)55;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 17060145523374922957ULL;
short var_8 = (short)-1669;
signed char var_9 = (signed char)-31;
signed char var_10 = (signed char)-126;
long long int var_11 = -3744224832651869415LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -5303083269850071114LL;
int zero = 0;
short var_14 = (short)-20700;
unsigned long long int var_15 = 12969040022788569337ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
