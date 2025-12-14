#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned char var_3 = (unsigned char)214;
unsigned char var_7 = (unsigned char)87;
long long int var_8 = -3619963791156111929LL;
signed char var_9 = (signed char)-53;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 1376479706;
signed char var_17 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
