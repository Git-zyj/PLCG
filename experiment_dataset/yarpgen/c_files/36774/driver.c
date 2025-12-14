#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18129526485344124228ULL;
signed char var_1 = (signed char)62;
_Bool var_2 = (_Bool)1;
long long int var_3 = 4296811737606551284LL;
signed char var_5 = (signed char)15;
signed char var_6 = (signed char)-1;
signed char var_10 = (signed char)88;
int zero = 0;
unsigned long long int var_11 = 228959286184874153ULL;
long long int var_12 = -5590935154991545044LL;
signed char var_13 = (signed char)17;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
