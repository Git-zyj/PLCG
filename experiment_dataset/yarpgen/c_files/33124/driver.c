#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)210;
_Bool var_2 = (_Bool)1;
int var_4 = -667739902;
unsigned int var_5 = 3931955026U;
unsigned short var_9 = (unsigned short)849;
unsigned int var_10 = 550809738U;
int zero = 0;
int var_11 = 1226623943;
signed char var_12 = (signed char)15;
signed char var_13 = (signed char)85;
int var_14 = 1262401300;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
