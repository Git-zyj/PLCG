#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14253355225420733468ULL;
short var_5 = (short)-27132;
long long int var_6 = 2365955294617246637LL;
signed char var_8 = (signed char)(-127 - 1);
_Bool var_13 = (_Bool)1;
int var_14 = -110497932;
int zero = 0;
unsigned char var_15 = (unsigned char)188;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
