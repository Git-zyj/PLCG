#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
unsigned int var_2 = 338126109U;
long long int var_3 = 7085323819130800944LL;
signed char var_7 = (signed char)13;
long long int var_8 = 3153064580290190224LL;
int zero = 0;
unsigned int var_12 = 2215939242U;
signed char var_13 = (signed char)57;
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
