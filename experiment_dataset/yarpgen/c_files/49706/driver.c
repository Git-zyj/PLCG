#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2037300707;
int var_7 = -1087840916;
signed char var_9 = (signed char)72;
int zero = 0;
signed char var_12 = (signed char)23;
unsigned long long int var_13 = 561615525519416023ULL;
long long int var_14 = 1380082880241700245LL;
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
