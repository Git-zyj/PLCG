#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)118;
long long int var_7 = -1229267005207045562LL;
unsigned short var_8 = (unsigned short)31;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
