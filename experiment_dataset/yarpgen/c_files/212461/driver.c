#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-83;
unsigned long long int var_12 = 53571708456800704ULL;
signed char var_15 = (signed char)49;
int zero = 0;
unsigned long long int var_17 = 10093985655255862038ULL;
signed char var_18 = (signed char)-110;
unsigned char var_19 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
