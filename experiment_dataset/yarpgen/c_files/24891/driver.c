#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7728;
short var_2 = (short)3220;
unsigned long long int var_7 = 4121361572529716374ULL;
long long int var_18 = -8448513844988493374LL;
int zero = 0;
signed char var_19 = (signed char)94;
unsigned char var_20 = (unsigned char)15;
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
