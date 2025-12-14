#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)101;
int var_3 = -1672916892;
int var_6 = -250067040;
short var_10 = (short)-20645;
unsigned int var_11 = 3126002899U;
short var_14 = (short)5412;
_Bool var_16 = (_Bool)0;
int var_17 = -977109694;
long long int var_19 = -3329879033037175341LL;
int zero = 0;
unsigned int var_20 = 1827456327U;
short var_21 = (short)15964;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
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
