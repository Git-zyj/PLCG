#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
int var_3 = 1196097768;
int var_4 = -1390987365;
unsigned int var_8 = 2488936571U;
unsigned int var_12 = 158582158U;
int zero = 0;
signed char var_14 = (signed char)-118;
int var_15 = -975406720;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
