#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54212;
unsigned long long int var_2 = 1872427738321078455ULL;
long long int var_3 = -7024316089680734148LL;
int var_10 = 375713609;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-75;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
