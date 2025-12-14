#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -213423672;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 12332751403709789588ULL;
unsigned long long int var_6 = 12142254031771467448ULL;
int var_7 = 484728924;
int zero = 0;
short var_11 = (short)-5675;
int var_12 = -1743390217;
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
