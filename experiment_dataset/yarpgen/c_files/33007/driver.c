#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-39;
unsigned int var_8 = 169882278U;
short var_10 = (short)24093;
unsigned int var_13 = 4152992771U;
int var_14 = 159239025;
int zero = 0;
long long int var_20 = -1543736848389753166LL;
signed char var_21 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
