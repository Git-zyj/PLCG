#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21608;
unsigned short var_5 = (unsigned short)48682;
unsigned int var_15 = 1695283831U;
long long int var_18 = 486420749329227558LL;
int zero = 0;
int var_19 = -412804370;
long long int var_20 = -3894296295231052994LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
