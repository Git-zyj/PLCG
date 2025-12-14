#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2761353392419389213LL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)30804;
unsigned long long int var_8 = 3465338584838947392ULL;
long long int var_13 = 3190809980206750152LL;
int zero = 0;
int var_14 = -786715426;
unsigned char var_15 = (unsigned char)219;
unsigned int var_16 = 3041836339U;
long long int var_17 = -363345173473319587LL;
int var_18 = 1233315048;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
