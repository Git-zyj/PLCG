#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4059723893434483184ULL;
short var_3 = (short)4011;
unsigned int var_4 = 1094864003U;
int var_9 = 1368345763;
unsigned char var_10 = (unsigned char)66;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 372645865;
int var_15 = 1368364586;
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
