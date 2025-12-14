#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2009999386;
unsigned long long int var_1 = 12335953448183121501ULL;
short var_2 = (short)23111;
unsigned long long int var_3 = 17671142324792959865ULL;
signed char var_4 = (signed char)-72;
int zero = 0;
long long int var_10 = -6359423484491056884LL;
short var_11 = (short)27956;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
