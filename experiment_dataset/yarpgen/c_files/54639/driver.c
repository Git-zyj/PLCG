#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
int var_2 = -1689188801;
signed char var_5 = (signed char)103;
signed char var_6 = (signed char)25;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-99;
unsigned int var_12 = 3554199220U;
unsigned short var_13 = (unsigned short)51163;
_Bool var_14 = (_Bool)1;
signed char var_19 = (signed char)20;
int zero = 0;
unsigned long long int var_20 = 5169664846508649351ULL;
unsigned int var_21 = 2028133329U;
unsigned short var_22 = (unsigned short)39576;
int var_23 = 538966040;
long long int var_24 = -2438997933705910237LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
