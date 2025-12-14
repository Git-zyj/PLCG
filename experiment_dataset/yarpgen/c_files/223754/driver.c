#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)22;
signed char var_5 = (signed char)-112;
long long int var_11 = 8408617110435998491LL;
long long int var_13 = -2365812018240519902LL;
int zero = 0;
signed char var_15 = (signed char)-30;
signed char var_16 = (signed char)-123;
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
