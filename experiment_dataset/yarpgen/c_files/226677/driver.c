#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 753156053006238916LL;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-125;
short var_6 = (short)23666;
unsigned short var_8 = (unsigned short)39253;
int zero = 0;
long long int var_10 = -6684754487259016178LL;
unsigned short var_11 = (unsigned short)1728;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
