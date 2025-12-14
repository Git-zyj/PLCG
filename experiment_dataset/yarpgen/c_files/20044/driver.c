#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -730227628;
short var_2 = (short)10074;
signed char var_5 = (signed char)98;
_Bool var_7 = (_Bool)1;
int var_9 = 441659322;
int zero = 0;
unsigned long long int var_11 = 7101249655442052975ULL;
int var_12 = 452482585;
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
