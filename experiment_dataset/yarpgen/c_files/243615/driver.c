#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
unsigned short var_1 = (unsigned short)1673;
_Bool var_2 = (_Bool)0;
long long int var_3 = 7189427938543860685LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = -8412947335215088368LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
long long int var_10 = 3033214086848567607LL;
int zero = 0;
short var_11 = (short)8871;
unsigned short var_12 = (unsigned short)25610;
short var_13 = (short)-4639;
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
