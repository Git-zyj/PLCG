#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3618534646U;
long long int var_7 = -420506846239735798LL;
signed char var_9 = (signed char)61;
signed char var_18 = (signed char)44;
int zero = 0;
signed char var_19 = (signed char)78;
unsigned char var_20 = (unsigned char)135;
int var_21 = 1961219007;
long long int var_22 = -8689807012361713127LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
