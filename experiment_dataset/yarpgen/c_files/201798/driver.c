#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8207486814255311555ULL;
unsigned long long int var_1 = 15403397340085066573ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)104;
signed char var_6 = (signed char)28;
_Bool var_7 = (_Bool)1;
unsigned long long int var_13 = 10544709130665644970ULL;
long long int var_14 = 8116078385246159186LL;
int zero = 0;
unsigned long long int var_17 = 7302547101749300145ULL;
unsigned int var_18 = 2850294690U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
