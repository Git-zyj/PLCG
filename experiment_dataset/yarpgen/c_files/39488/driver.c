#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7899651939658312742LL;
long long int var_8 = -2908710633267315307LL;
unsigned long long int var_10 = 8388343277035191423ULL;
int var_13 = 1516354596;
unsigned char var_14 = (unsigned char)147;
int var_15 = 842048350;
int zero = 0;
int var_18 = -2091530541;
int var_19 = -1001012543;
unsigned long long int var_20 = 11291075588348226499ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
