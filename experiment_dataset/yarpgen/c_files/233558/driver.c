#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5551025446541159304LL;
signed char var_5 = (signed char)-2;
short var_6 = (short)8324;
long long int var_7 = 3261125271913655421LL;
_Bool var_11 = (_Bool)0;
int var_14 = 1739917930;
int zero = 0;
unsigned int var_19 = 1858969241U;
unsigned int var_20 = 786348374U;
unsigned short var_21 = (unsigned short)8069;
int var_22 = -1392724163;
unsigned int var_23 = 3684250649U;
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
