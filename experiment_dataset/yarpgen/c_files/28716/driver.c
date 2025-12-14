#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49835;
int var_4 = 2101911446;
unsigned int var_6 = 2042449657U;
signed char var_10 = (signed char)-45;
int zero = 0;
long long int var_12 = -5470918304935097843LL;
unsigned short var_13 = (unsigned short)24343;
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
