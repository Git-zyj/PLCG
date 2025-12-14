#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
signed char var_1 = (signed char)25;
signed char var_2 = (signed char)69;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)34812;
signed char var_6 = (signed char)-35;
long long int var_7 = 2435775569891360485LL;
signed char var_9 = (signed char)93;
unsigned int var_12 = 2168500227U;
short var_13 = (short)20483;
int zero = 0;
long long int var_14 = -1052691750928315905LL;
long long int var_15 = -5629491368453648771LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
