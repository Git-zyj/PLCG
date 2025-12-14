#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-72;
long long int var_8 = 5310537472851296315LL;
unsigned long long int var_11 = 17566463069750190999ULL;
int zero = 0;
signed char var_16 = (signed char)9;
_Bool var_17 = (_Bool)0;
long long int var_18 = 7609599908968774741LL;
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
