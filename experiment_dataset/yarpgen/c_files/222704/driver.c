#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6841916545004466138ULL;
long long int var_1 = 7800169239830950445LL;
signed char var_4 = (signed char)-11;
short var_5 = (short)-29877;
unsigned short var_8 = (unsigned short)61410;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2724316743U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
