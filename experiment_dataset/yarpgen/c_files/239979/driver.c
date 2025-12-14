#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned char var_5 = (unsigned char)238;
long long int var_8 = 8043484209309049939LL;
int var_10 = -970011820;
unsigned long long int var_11 = 328837554404427578ULL;
int var_13 = 1768550117;
int zero = 0;
unsigned char var_15 = (unsigned char)90;
unsigned long long int var_16 = 6485107104177267339ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
