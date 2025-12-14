#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)126;
signed char var_7 = (signed char)-12;
long long int var_14 = 6990119929989070313LL;
unsigned long long int var_15 = 6663508825381877359ULL;
int zero = 0;
int var_16 = 889308593;
unsigned long long int var_17 = 6650979448199404840ULL;
unsigned short var_18 = (unsigned short)22374;
void init() {
}

void checksum() {
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
