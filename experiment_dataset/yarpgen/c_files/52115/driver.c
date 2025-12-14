#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1519836242U;
long long int var_1 = 2446414392280675257LL;
signed char var_5 = (signed char)19;
signed char var_6 = (signed char)-30;
unsigned int var_10 = 2619648471U;
unsigned long long int var_12 = 9767756853480508027ULL;
int zero = 0;
signed char var_13 = (signed char)73;
int var_14 = -1229263385;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
