#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50949;
unsigned long long int var_3 = 14460145803565074831ULL;
unsigned int var_6 = 2741422596U;
int zero = 0;
int var_18 = 1910092279;
long long int var_19 = -4693677478003652236LL;
signed char var_20 = (signed char)-10;
long long int var_21 = -1713368868430318012LL;
unsigned long long int var_22 = 12985484250587871201ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
