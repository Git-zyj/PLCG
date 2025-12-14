#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
_Bool var_1 = (_Bool)0;
unsigned long long int var_8 = 10728750996278394308ULL;
long long int var_9 = -3599118442238306157LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 10723474615781303204ULL;
short var_12 = (short)-1449;
_Bool var_13 = (_Bool)1;
long long int var_14 = -4399409373465081019LL;
signed char var_15 = (signed char)-19;
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
