#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13596234874705996983ULL;
unsigned long long int var_3 = 7285956359751890096ULL;
signed char var_9 = (signed char)113;
unsigned long long int var_11 = 8208496582071433653ULL;
unsigned long long int var_14 = 14366863995317108707ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)142;
long long int var_17 = 4514371564038259458LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
