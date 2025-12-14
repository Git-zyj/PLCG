#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 43346880U;
signed char var_8 = (signed char)-106;
unsigned int var_15 = 650515708U;
int zero = 0;
long long int var_18 = 3031554806094317671LL;
signed char var_19 = (signed char)26;
unsigned int var_20 = 323614347U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
