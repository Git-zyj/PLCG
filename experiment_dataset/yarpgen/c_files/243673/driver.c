#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
unsigned long long int var_5 = 14370239276635041513ULL;
long long int var_9 = 6078269311240447879LL;
signed char var_10 = (signed char)106;
int zero = 0;
unsigned short var_13 = (unsigned short)31874;
unsigned short var_14 = (unsigned short)62215;
long long int var_15 = -4517835561496544246LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
