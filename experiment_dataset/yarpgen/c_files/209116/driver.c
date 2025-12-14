#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2423662736U;
signed char var_2 = (signed char)116;
long long int var_4 = -1587653832238977701LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)35179;
signed char var_8 = (signed char)-31;
int zero = 0;
unsigned int var_14 = 357217295U;
int var_15 = 1218747602;
int var_16 = -1799218678;
unsigned char var_17 = (unsigned char)209;
long long int var_18 = 6717020433466975681LL;
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
