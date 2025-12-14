#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
long long int var_1 = 3719630962655373557LL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)63;
signed char var_8 = (signed char)-89;
signed char var_9 = (signed char)51;
int zero = 0;
unsigned short var_10 = (unsigned short)4769;
unsigned long long int var_11 = 134641814783265414ULL;
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
