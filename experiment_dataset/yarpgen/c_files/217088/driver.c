#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
unsigned int var_4 = 2294594220U;
unsigned int var_5 = 1139722911U;
short var_6 = (short)-9560;
unsigned long long int var_7 = 11141855677459854382ULL;
unsigned short var_8 = (unsigned short)11465;
long long int var_9 = 1791967689798147182LL;
int zero = 0;
short var_10 = (short)-27529;
long long int var_11 = -1104983284592696845LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
