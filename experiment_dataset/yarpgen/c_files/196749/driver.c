#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-123;
signed char var_3 = (signed char)6;
short var_7 = (short)8113;
unsigned int var_12 = 3331678727U;
int zero = 0;
long long int var_13 = 8387855768378712018LL;
long long int var_14 = 6728727200434295023LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
