#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15825;
unsigned long long int var_1 = 8260838148183440452ULL;
signed char var_7 = (signed char)-19;
signed char var_8 = (signed char)-85;
unsigned int var_10 = 1574926655U;
int var_11 = 505891067;
int zero = 0;
long long int var_12 = -3113189335756462211LL;
short var_13 = (short)-15985;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
