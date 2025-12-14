#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
signed char var_3 = (signed char)-57;
short var_11 = (short)17908;
long long int var_15 = 2736345152050374804LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 6267986110172242362LL;
short var_18 = (short)22922;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
