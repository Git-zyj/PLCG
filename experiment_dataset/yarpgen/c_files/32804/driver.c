#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28845;
short var_3 = (short)-15329;
long long int var_4 = -6420435040893989399LL;
short var_7 = (short)-20914;
unsigned int var_8 = 4199272983U;
short var_9 = (short)15042;
int zero = 0;
unsigned short var_10 = (unsigned short)36293;
unsigned int var_11 = 3075472540U;
signed char var_12 = (signed char)-60;
unsigned long long int var_13 = 4065277817208977009ULL;
short var_14 = (short)27142;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
