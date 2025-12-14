#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 6054703572626141523ULL;
unsigned int var_8 = 1123887669U;
long long int var_18 = -2710760951602723364LL;
int zero = 0;
short var_19 = (short)5616;
signed char var_20 = (signed char)95;
unsigned long long int var_21 = 12063298255247780201ULL;
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
