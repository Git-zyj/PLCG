#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)52;
unsigned char var_5 = (unsigned char)17;
int var_7 = -181600284;
unsigned char var_9 = (unsigned char)181;
long long int var_11 = -769174161964827857LL;
int zero = 0;
short var_12 = (short)-18888;
unsigned char var_13 = (unsigned char)192;
long long int var_14 = -867173666458252417LL;
long long int var_15 = 3583057843819114148LL;
signed char var_16 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
