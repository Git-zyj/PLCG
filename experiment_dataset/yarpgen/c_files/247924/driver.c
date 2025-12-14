#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -5891348215010836163LL;
signed char var_5 = (signed char)-40;
signed char var_6 = (signed char)96;
signed char var_7 = (signed char)106;
_Bool var_8 = (_Bool)0;
long long int var_9 = -9031539684228966003LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)17159;
unsigned int var_12 = 2407019921U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
