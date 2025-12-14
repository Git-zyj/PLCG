#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-97;
long long int var_6 = -2846895632813338264LL;
_Bool var_8 = (_Bool)0;
long long int var_10 = 7798658239746665873LL;
signed char var_14 = (signed char)-90;
int zero = 0;
signed char var_18 = (signed char)104;
unsigned int var_19 = 4049997441U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
