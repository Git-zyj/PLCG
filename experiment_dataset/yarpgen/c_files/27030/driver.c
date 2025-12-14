#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13045;
short var_6 = (short)-14365;
short var_9 = (short)11074;
_Bool var_11 = (_Bool)1;
int var_15 = 1896937766;
signed char var_17 = (signed char)37;
int zero = 0;
signed char var_19 = (signed char)57;
unsigned long long int var_20 = 12129563930008334474ULL;
long long int var_21 = -4969024696323975093LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
