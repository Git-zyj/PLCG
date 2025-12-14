#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
unsigned short var_10 = (unsigned short)19560;
_Bool var_13 = (_Bool)1;
unsigned short var_18 = (unsigned short)49470;
int zero = 0;
signed char var_19 = (signed char)-120;
unsigned long long int var_20 = 10732254190728170095ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
