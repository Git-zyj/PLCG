#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
long long int var_1 = -1469689086379727606LL;
_Bool var_4 = (_Bool)1;
int var_8 = 413538946;
_Bool var_9 = (_Bool)0;
long long int var_11 = -7390820810706382344LL;
int zero = 0;
long long int var_12 = 4972636384943318544LL;
long long int var_13 = -5689414310237556169LL;
signed char var_14 = (signed char)-113;
unsigned int var_15 = 3429721457U;
void init() {
}

void checksum() {
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
