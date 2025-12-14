#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7590170625115141136ULL;
unsigned short var_1 = (unsigned short)41993;
_Bool var_2 = (_Bool)1;
signed char var_7 = (signed char)126;
int var_9 = 1427576018;
long long int var_10 = 7054429142842242517LL;
unsigned int var_12 = 2873720603U;
unsigned long long int var_16 = 10622700061474106584ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14398233802402062595ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8843043627427465700LL;
void init() {
}

void checksum() {
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
