#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14565;
signed char var_1 = (signed char)111;
long long int var_2 = 5714135123038463654LL;
unsigned long long int var_4 = 11252135195200158649ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)25;
long long int var_12 = -2002662080786919651LL;
signed char var_13 = (signed char)-89;
int zero = 0;
signed char var_15 = (signed char)-96;
short var_16 = (short)30658;
void init() {
}

void checksum() {
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
