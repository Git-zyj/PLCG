#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)9;
long long int var_2 = -7603865685272459114LL;
int var_4 = -154292033;
long long int var_6 = 5472822727432615321LL;
signed char var_7 = (signed char)-38;
int var_8 = 530860633;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1240263127U;
long long int var_13 = -7314569410677340042LL;
signed char var_15 = (signed char)102;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = 4798288208104388505LL;
unsigned int var_19 = 1504134363U;
long long int var_20 = 6528657292506101225LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
