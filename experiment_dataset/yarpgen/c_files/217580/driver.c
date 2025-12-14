#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8017185351146921492ULL;
short var_1 = (short)-21957;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 2435080056U;
short var_13 = (short)-28221;
short var_14 = (short)-29137;
int var_15 = 1162970005;
short var_16 = (short)-22991;
int zero = 0;
unsigned long long int var_17 = 16037356355261546864ULL;
signed char var_18 = (signed char)-29;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3520664029U;
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
