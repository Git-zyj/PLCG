#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
signed char var_2 = (signed char)88;
int var_6 = 1008855689;
unsigned long long int var_8 = 3542181849779173595ULL;
unsigned char var_9 = (unsigned char)165;
long long int var_10 = -2762517125241508323LL;
long long int var_11 = -6106901032287805449LL;
short var_13 = (short)5788;
_Bool var_15 = (_Bool)0;
long long int var_16 = -135655932662063882LL;
int var_18 = -2067149123;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)65;
_Bool var_22 = (_Bool)0;
int var_23 = 1070187852;
void init() {
}

void checksum() {
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
