#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
unsigned char var_2 = (unsigned char)10;
long long int var_5 = 8033886763400124835LL;
_Bool var_13 = (_Bool)1;
int var_14 = -1766644273;
int zero = 0;
short var_17 = (short)-21057;
int var_18 = 2114883717;
void init() {
}

void checksum() {
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
