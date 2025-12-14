#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11923790275519201767ULL;
unsigned short var_6 = (unsigned short)52718;
long long int var_7 = -515098234019280946LL;
unsigned int var_13 = 2832068782U;
int zero = 0;
short var_18 = (short)18547;
unsigned short var_19 = (unsigned short)25244;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
