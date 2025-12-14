#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11557;
unsigned short var_4 = (unsigned short)61480;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)16;
unsigned long long int var_8 = 9889505504996547860ULL;
int zero = 0;
signed char var_12 = (signed char)(-127 - 1);
int var_13 = 1696337052;
unsigned long long int var_14 = 14334008816699016007ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
