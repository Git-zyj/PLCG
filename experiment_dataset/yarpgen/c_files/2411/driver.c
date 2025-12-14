#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14754;
long long int var_1 = -7718678540811446655LL;
unsigned int var_4 = 590077819U;
unsigned long long int var_6 = 6614193303565350305ULL;
unsigned char var_7 = (unsigned char)82;
unsigned char var_9 = (unsigned char)182;
short var_13 = (short)7963;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)19;
signed char var_20 = (signed char)34;
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
