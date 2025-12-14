#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)127;
unsigned long long int var_9 = 664426463683142421ULL;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3186345008U;
int zero = 0;
unsigned short var_17 = (unsigned short)29878;
signed char var_18 = (signed char)-66;
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
