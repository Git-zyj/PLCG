#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39980;
int var_5 = 2015898288;
int var_7 = -1592753269;
signed char var_13 = (signed char)120;
int zero = 0;
unsigned long long int var_14 = 2571769873196883297ULL;
signed char var_15 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
