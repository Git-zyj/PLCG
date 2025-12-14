#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9492;
unsigned long long int var_4 = 8490165450358792959ULL;
int var_8 = -1009456713;
signed char var_11 = (signed char)37;
unsigned int var_13 = 1394493399U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 12025641827845702303ULL;
unsigned long long int var_19 = 5604409456783142181ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
