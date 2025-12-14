#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 314840613;
unsigned short var_2 = (unsigned short)34970;
short var_4 = (short)-31443;
_Bool var_7 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)121;
unsigned long long int var_12 = 6740921515946930181ULL;
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
