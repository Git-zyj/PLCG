#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)87;
signed char var_6 = (signed char)32;
int var_7 = -658606803;
unsigned char var_8 = (unsigned char)74;
unsigned long long int var_9 = 12761657348104488124ULL;
long long int var_10 = 2082503141013951047LL;
unsigned long long int var_11 = 10319257192612987414ULL;
unsigned long long int var_12 = 1140792623198351944ULL;
unsigned char var_16 = (unsigned char)204;
int zero = 0;
signed char var_19 = (signed char)127;
unsigned char var_20 = (unsigned char)107;
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
