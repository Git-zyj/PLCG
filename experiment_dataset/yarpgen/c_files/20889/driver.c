#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6879;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 3214074445U;
signed char var_8 = (signed char)-102;
unsigned int var_9 = 1162660690U;
signed char var_10 = (signed char)45;
int zero = 0;
signed char var_11 = (signed char)79;
long long int var_12 = -198609347044616015LL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-3636;
unsigned long long int var_15 = 14152135022592233823ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
