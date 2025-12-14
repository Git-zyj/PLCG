#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19814;
long long int var_2 = 9207813446699688334LL;
unsigned int var_4 = 4156238361U;
int var_5 = -1127651515;
unsigned int var_6 = 985704238U;
short var_7 = (short)20170;
signed char var_8 = (signed char)-14;
int zero = 0;
signed char var_11 = (signed char)-52;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2242322731U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
