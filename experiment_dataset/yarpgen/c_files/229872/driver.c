#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4063208519399712085LL;
unsigned char var_4 = (unsigned char)30;
long long int var_5 = 8732931217782968371LL;
int var_10 = 1032668058;
unsigned char var_12 = (unsigned char)161;
unsigned char var_15 = (unsigned char)74;
unsigned short var_16 = (unsigned short)45826;
int zero = 0;
unsigned long long int var_18 = 558792221596721642ULL;
signed char var_19 = (signed char)116;
void init() {
}

void checksum() {
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
