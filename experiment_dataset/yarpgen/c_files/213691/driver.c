#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)23260;
short var_9 = (short)-15150;
signed char var_11 = (signed char)-44;
unsigned long long int var_13 = 534628234504444849ULL;
int zero = 0;
long long int var_15 = -2579156651389618300LL;
long long int var_16 = 3526472077635422517LL;
unsigned int var_17 = 1644109207U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
