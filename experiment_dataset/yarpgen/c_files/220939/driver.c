#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
unsigned int var_15 = 412153102U;
unsigned int var_17 = 1284332143U;
int zero = 0;
signed char var_18 = (signed char)-103;
long long int var_19 = -172995567382992152LL;
unsigned long long int var_20 = 4594649657771748606ULL;
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
