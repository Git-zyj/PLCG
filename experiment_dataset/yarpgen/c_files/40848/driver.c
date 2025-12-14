#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-72;
unsigned long long int var_6 = 9639996231761726542ULL;
long long int var_8 = -1770755976187833800LL;
unsigned char var_10 = (unsigned char)181;
signed char var_11 = (signed char)-83;
unsigned char var_16 = (unsigned char)79;
int zero = 0;
short var_19 = (short)30534;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
short var_22 = (short)26113;
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
