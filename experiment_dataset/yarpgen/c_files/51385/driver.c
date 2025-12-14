#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10992008603687179409ULL;
long long int var_1 = 6774240845065701765LL;
signed char var_4 = (signed char)57;
int var_10 = 708969032;
unsigned short var_11 = (unsigned short)24113;
unsigned char var_12 = (unsigned char)97;
int zero = 0;
unsigned char var_19 = (unsigned char)124;
unsigned char var_20 = (unsigned char)63;
signed char var_21 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
