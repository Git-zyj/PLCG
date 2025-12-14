#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
signed char var_14 = (signed char)109;
unsigned long long int var_15 = 17230870962373871036ULL;
short var_18 = (short)-28836;
int var_19 = -1049893594;
int zero = 0;
unsigned long long int var_20 = 1023108927444671512ULL;
long long int var_21 = -7324569107788771468LL;
signed char var_22 = (signed char)76;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
