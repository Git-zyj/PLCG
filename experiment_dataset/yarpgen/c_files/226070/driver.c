#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
int var_3 = 290112213;
int var_4 = -1462537265;
unsigned short var_8 = (unsigned short)16134;
unsigned short var_10 = (unsigned short)8868;
int zero = 0;
unsigned long long int var_15 = 18100028953290240102ULL;
unsigned short var_16 = (unsigned short)15529;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
