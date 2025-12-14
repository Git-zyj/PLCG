#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)52017;
long long int var_7 = -529755361636894764LL;
int var_9 = 877804526;
signed char var_10 = (signed char)-85;
int zero = 0;
signed char var_12 = (signed char)44;
signed char var_13 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
