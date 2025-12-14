#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1938314936;
unsigned long long int var_11 = 15248030483011114071ULL;
unsigned char var_12 = (unsigned char)221;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = 3477161340559850597LL;
int var_17 = -573421814;
long long int var_18 = 3359701280487751994LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -2983135592376658728LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
