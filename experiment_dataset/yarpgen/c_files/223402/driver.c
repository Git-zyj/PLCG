#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 166524351;
unsigned long long int var_4 = 3708956527871720244ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)195;
unsigned char var_15 = (unsigned char)216;
unsigned long long int var_16 = 4142627747344795764ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
