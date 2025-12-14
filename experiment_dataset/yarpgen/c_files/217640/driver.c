#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)11;
int var_2 = 1762752446;
int var_4 = 1281535909;
unsigned int var_7 = 1428361534U;
unsigned long long int var_8 = 6379854640663100872ULL;
unsigned int var_10 = 3818397104U;
int zero = 0;
unsigned int var_17 = 2142364434U;
int var_18 = -1572675463;
signed char var_19 = (signed char)-60;
signed char var_20 = (signed char)-61;
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
