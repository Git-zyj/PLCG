#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41359;
int var_3 = -716889290;
signed char var_4 = (signed char)107;
int var_5 = 1611576198;
int var_11 = -74748306;
long long int var_12 = 6614708420468506542LL;
int zero = 0;
int var_19 = 1259084862;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
