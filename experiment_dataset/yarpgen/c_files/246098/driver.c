#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4735482505412897692LL;
signed char var_1 = (signed char)-107;
long long int var_2 = -6266120144313495310LL;
unsigned char var_7 = (unsigned char)248;
unsigned short var_9 = (unsigned short)1620;
int zero = 0;
unsigned short var_10 = (unsigned short)41798;
signed char var_11 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
