#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2036036001;
int var_5 = 470379664;
unsigned char var_11 = (unsigned char)246;
int var_14 = -1489275754;
unsigned long long int var_17 = 16861962381764210685ULL;
int zero = 0;
int var_19 = -1581238871;
unsigned long long int var_20 = 1958352246074604338ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
