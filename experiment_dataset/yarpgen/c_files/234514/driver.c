#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7167959707114386233LL;
unsigned long long int var_11 = 1342797657416267020ULL;
short var_12 = (short)-20843;
unsigned long long int var_13 = 1973275367099572342ULL;
signed char var_14 = (signed char)12;
int zero = 0;
unsigned char var_17 = (unsigned char)98;
long long int var_18 = 3251186721960969787LL;
void init() {
}

void checksum() {
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
