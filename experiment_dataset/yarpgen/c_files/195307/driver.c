#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 198988194;
short var_4 = (short)15739;
long long int var_7 = -9184449667050379044LL;
int zero = 0;
unsigned char var_11 = (unsigned char)228;
short var_12 = (short)-29332;
unsigned char var_13 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
