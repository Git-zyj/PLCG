#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-106;
unsigned char var_8 = (unsigned char)143;
long long int var_13 = 8022592147390541584LL;
int var_14 = 1557424621;
int zero = 0;
signed char var_16 = (signed char)-43;
unsigned char var_17 = (unsigned char)226;
signed char var_18 = (signed char)19;
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
