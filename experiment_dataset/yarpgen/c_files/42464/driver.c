#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1916034993642179617LL;
int var_4 = 487536474;
unsigned int var_6 = 2187184582U;
unsigned long long int var_15 = 10353754814225449020ULL;
unsigned char var_16 = (unsigned char)126;
int zero = 0;
unsigned long long int var_19 = 6891101194642817897ULL;
unsigned char var_20 = (unsigned char)74;
int var_21 = -2138730368;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
