#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1869212732U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 8956587187076947002ULL;
int var_10 = -2039770453;
int var_11 = -1363523936;
unsigned long long int var_12 = 13802611848809417379ULL;
short var_14 = (short)16546;
unsigned long long int var_15 = 491520329427447215ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)26988;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-95;
short var_23 = (short)27042;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
