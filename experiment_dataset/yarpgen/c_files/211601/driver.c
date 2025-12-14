#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4253748411U;
short var_1 = (short)-24636;
unsigned int var_5 = 812966123U;
unsigned long long int var_8 = 3891148103779223223ULL;
int zero = 0;
signed char var_10 = (signed char)-110;
unsigned char var_11 = (unsigned char)66;
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
