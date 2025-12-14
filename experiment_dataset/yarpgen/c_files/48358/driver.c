#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)230;
short var_4 = (short)-6268;
unsigned long long int var_6 = 13979809755390245617ULL;
signed char var_10 = (signed char)39;
int zero = 0;
unsigned short var_13 = (unsigned short)61479;
long long int var_14 = -1504509967914476128LL;
unsigned short var_15 = (unsigned short)62887;
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
