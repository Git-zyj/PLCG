#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18438;
long long int var_1 = 536462414525893058LL;
long long int var_2 = 2330796998681557859LL;
long long int var_3 = -3460361246525500923LL;
short var_4 = (short)5480;
int var_7 = 536880740;
int var_8 = 1208991580;
signed char var_9 = (signed char)109;
int var_13 = 1561309815;
unsigned int var_14 = 1592212110U;
int zero = 0;
long long int var_17 = -5749060427228184200LL;
long long int var_18 = 2948759958149556876LL;
long long int var_19 = 5786537150436593678LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
