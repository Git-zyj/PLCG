#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3036835492U;
signed char var_2 = (signed char)46;
short var_6 = (short)31728;
long long int var_10 = 5491354004293003355LL;
int var_11 = -1078318787;
unsigned long long int var_13 = 1029411253573394599ULL;
int zero = 0;
signed char var_14 = (signed char)-106;
unsigned char var_15 = (unsigned char)209;
signed char var_16 = (signed char)-34;
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
