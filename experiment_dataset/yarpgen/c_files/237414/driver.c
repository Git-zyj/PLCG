#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-91;
_Bool var_7 = (_Bool)1;
long long int var_8 = 245087981719290991LL;
unsigned long long int var_9 = 5056816664432864076ULL;
int zero = 0;
signed char var_12 = (signed char)97;
long long int var_13 = 3441756908949188798LL;
void init() {
}

void checksum() {
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
