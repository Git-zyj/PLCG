#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned char var_1 = (unsigned char)57;
signed char var_3 = (signed char)76;
unsigned long long int var_4 = 4394154966158091801ULL;
long long int var_6 = 1671760930042769994LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 7141236622534666524LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
