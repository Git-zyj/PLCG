#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45205;
unsigned int var_4 = 2848640197U;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)-120;
int zero = 0;
unsigned long long int var_13 = 2778341865174263760ULL;
short var_14 = (short)-24695;
long long int var_15 = -1213522767383237313LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
