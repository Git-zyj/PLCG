#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
unsigned char var_3 = (unsigned char)115;
long long int var_8 = -9164692972245002273LL;
signed char var_9 = (signed char)105;
unsigned short var_10 = (unsigned short)28688;
int zero = 0;
unsigned char var_11 = (unsigned char)239;
unsigned char var_12 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
