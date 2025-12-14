#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -242104391;
unsigned long long int var_2 = 14441386269836268224ULL;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -5231397127995245601LL;
int zero = 0;
unsigned int var_19 = 3548453531U;
unsigned long long int var_20 = 2805550851796044586ULL;
long long int var_21 = -4656096986204642666LL;
unsigned long long int var_22 = 9179679101345823732ULL;
signed char var_23 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
