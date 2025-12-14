#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4055142748866363965LL;
long long int var_4 = 6983887803602600731LL;
int var_7 = 1035524903;
signed char var_12 = (signed char)42;
long long int var_14 = 2107681171590847446LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -1444175932;
int var_18 = 946741577;
signed char var_19 = (signed char)96;
signed char var_20 = (signed char)-118;
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
