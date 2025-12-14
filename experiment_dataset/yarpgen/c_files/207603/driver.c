#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7111426012292609021LL;
long long int var_9 = -5075805385145388232LL;
unsigned long long int var_11 = 7089575506932823663ULL;
int var_14 = 1561595980;
long long int var_16 = -5755261627228207823LL;
unsigned int var_19 = 45318737U;
int zero = 0;
short var_20 = (short)6208;
long long int var_21 = -5681779141828198465LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 17923212757465165409ULL;
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
