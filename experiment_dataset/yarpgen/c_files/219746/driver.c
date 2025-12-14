#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
unsigned long long int var_1 = 12069447051199456934ULL;
int var_11 = 1278978959;
signed char var_12 = (signed char)46;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-95;
signed char var_16 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
