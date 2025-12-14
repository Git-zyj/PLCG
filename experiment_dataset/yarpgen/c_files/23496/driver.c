#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1994895924;
long long int var_3 = 9053301029382266551LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_6 = 469910224;
long long int var_9 = -6160797565625065139LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
