#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 40363594274268475ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)5551;
long long int var_12 = 4340106938751837764LL;
short var_13 = (short)6552;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
