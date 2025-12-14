#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5050738391572238932LL;
signed char var_5 = (signed char)-64;
unsigned long long int var_9 = 12586544957971090117ULL;
short var_12 = (short)-19634;
signed char var_13 = (signed char)-111;
int var_15 = 1610204730;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)32;
unsigned long long int var_20 = 652048012199173567ULL;
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
