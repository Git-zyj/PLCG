#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29824;
unsigned char var_1 = (unsigned char)39;
unsigned int var_3 = 3841840819U;
unsigned char var_6 = (unsigned char)148;
long long int var_7 = 7412714975414795300LL;
signed char var_11 = (signed char)-41;
int zero = 0;
unsigned int var_17 = 1504145814U;
unsigned long long int var_18 = 12722538416671968071ULL;
void init() {
}

void checksum() {
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
