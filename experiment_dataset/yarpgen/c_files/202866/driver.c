#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1083777731;
unsigned long long int var_5 = 227794527826405475ULL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)64;
int zero = 0;
int var_20 = -491360139;
unsigned short var_21 = (unsigned short)3431;
signed char var_22 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
