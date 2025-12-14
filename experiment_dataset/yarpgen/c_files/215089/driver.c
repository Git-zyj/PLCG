#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
unsigned long long int var_3 = 12449688711812276158ULL;
unsigned char var_7 = (unsigned char)49;
short var_9 = (short)28388;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 1824383287826291940ULL;
int zero = 0;
long long int var_13 = 4236765351635925178LL;
unsigned long long int var_14 = 17896053032247337613ULL;
long long int var_15 = -6736737125600759545LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3902364315U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
