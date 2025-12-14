#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)59;
unsigned int var_4 = 3776787463U;
int var_5 = 748886882;
unsigned int var_6 = 438408731U;
int zero = 0;
signed char var_12 = (signed char)-20;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 11629198705543920187ULL;
void init() {
}

void checksum() {
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
