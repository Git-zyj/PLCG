#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)224;
long long int var_9 = 3408218091787571700LL;
int zero = 0;
unsigned long long int var_11 = 8009675860385467101ULL;
long long int var_12 = 5276629067555788778LL;
signed char var_13 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
