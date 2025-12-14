#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 810093144;
short var_1 = (short)-29287;
unsigned char var_3 = (unsigned char)91;
unsigned char var_4 = (unsigned char)250;
signed char var_8 = (signed char)123;
long long int var_10 = -4322210204211158987LL;
int zero = 0;
signed char var_11 = (signed char)33;
short var_12 = (short)-7995;
short var_13 = (short)26183;
long long int var_14 = -5661773720629155846LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
