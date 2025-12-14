#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
signed char var_2 = (signed char)35;
signed char var_5 = (signed char)-91;
unsigned long long int var_6 = 7571951796031965158ULL;
short var_7 = (short)32058;
unsigned char var_8 = (unsigned char)114;
int var_9 = 1285332055;
int zero = 0;
short var_10 = (short)12461;
unsigned long long int var_11 = 18367110174009755834ULL;
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
