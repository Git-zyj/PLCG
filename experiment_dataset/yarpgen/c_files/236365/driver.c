#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2477748094141613781LL;
unsigned long long int var_9 = 2084376297658501060ULL;
unsigned int var_10 = 4142166318U;
int zero = 0;
unsigned long long int var_12 = 18217184157706614421ULL;
unsigned short var_13 = (unsigned short)60407;
unsigned char var_14 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
