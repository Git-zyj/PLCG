#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17227971164486737872ULL;
unsigned short var_7 = (unsigned short)769;
short var_10 = (short)-19925;
unsigned long long int var_11 = 3667820051671391389ULL;
int zero = 0;
unsigned int var_12 = 2019827309U;
_Bool var_13 = (_Bool)0;
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
