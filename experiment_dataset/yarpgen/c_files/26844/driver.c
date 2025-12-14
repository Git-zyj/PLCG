#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
unsigned int var_8 = 32505763U;
unsigned short var_11 = (unsigned short)63027;
signed char var_12 = (signed char)111;
int zero = 0;
int var_15 = -1350380010;
unsigned int var_16 = 486147919U;
long long int var_17 = 8971429256316283897LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
