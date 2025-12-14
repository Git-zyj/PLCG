#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3362018960U;
signed char var_3 = (signed char)-121;
short var_5 = (short)16251;
long long int var_7 = 8355641334364195118LL;
int zero = 0;
unsigned int var_11 = 4106439578U;
unsigned int var_12 = 284125042U;
unsigned char var_13 = (unsigned char)101;
unsigned int var_14 = 531132370U;
int var_15 = 1157069411;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
