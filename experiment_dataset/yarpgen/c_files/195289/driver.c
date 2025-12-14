#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17298370820815032453ULL;
int var_9 = 534543991;
unsigned char var_10 = (unsigned char)214;
int zero = 0;
signed char var_12 = (signed char)-32;
long long int var_13 = -7073009749515189631LL;
void init() {
}

void checksum() {
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
