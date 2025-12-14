#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 144638702395614882LL;
unsigned long long int var_11 = 14469873813126935988ULL;
unsigned char var_12 = (unsigned char)12;
int zero = 0;
long long int var_16 = 2059377547784210196LL;
unsigned long long int var_17 = 10788811257204172756ULL;
void init() {
}

void checksum() {
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
