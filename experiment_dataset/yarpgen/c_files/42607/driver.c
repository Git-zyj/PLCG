#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
long long int var_4 = -1984775543314839027LL;
long long int var_5 = 8584631453713728452LL;
signed char var_7 = (signed char)-14;
unsigned char var_9 = (unsigned char)179;
unsigned int var_11 = 961625239U;
unsigned long long int var_13 = 13553246840988332238ULL;
unsigned int var_16 = 2807701498U;
int var_17 = 1220280218;
int zero = 0;
short var_18 = (short)9000;
unsigned int var_19 = 1158833740U;
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
