#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
signed char var_2 = (signed char)-100;
signed char var_3 = (signed char)23;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int var_14 = 1380199206;
int zero = 0;
int var_17 = -935813280;
short var_18 = (short)9147;
signed char var_19 = (signed char)0;
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
