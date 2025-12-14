#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-21404;
unsigned long long int var_7 = 12354265284443968209ULL;
unsigned long long int var_9 = 17936284784733143572ULL;
unsigned int var_14 = 3470195252U;
int var_15 = 1911016971;
long long int var_17 = 3019474506425928422LL;
unsigned int var_19 = 455434399U;
int zero = 0;
unsigned char var_20 = (unsigned char)82;
unsigned long long int var_21 = 4076124867645025567ULL;
unsigned long long int var_22 = 6869821574564639971ULL;
unsigned char var_23 = (unsigned char)113;
_Bool var_24 = (_Bool)1;
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
