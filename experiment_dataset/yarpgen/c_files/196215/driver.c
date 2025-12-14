#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
long long int var_4 = 6666981359564408561LL;
unsigned long long int var_8 = 12771427714049680664ULL;
unsigned long long int var_12 = 8613588182169489199ULL;
int var_17 = -1914391686;
int zero = 0;
unsigned char var_18 = (unsigned char)154;
unsigned char var_19 = (unsigned char)221;
long long int var_20 = -257894268420950176LL;
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
