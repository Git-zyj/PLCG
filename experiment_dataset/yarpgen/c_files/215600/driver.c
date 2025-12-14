#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19613;
long long int var_5 = -8388282923631590731LL;
signed char var_6 = (signed char)-37;
signed char var_7 = (signed char)-97;
int zero = 0;
int var_12 = -957397046;
unsigned short var_13 = (unsigned short)40368;
unsigned int var_14 = 3714179547U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
