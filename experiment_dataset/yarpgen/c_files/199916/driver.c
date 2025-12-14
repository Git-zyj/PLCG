#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 496234782;
unsigned short var_2 = (unsigned short)46329;
short var_4 = (short)-26143;
unsigned char var_10 = (unsigned char)89;
long long int var_11 = -7568277073756376637LL;
int zero = 0;
long long int var_12 = -7711003874249026926LL;
short var_13 = (short)-22235;
unsigned char var_14 = (unsigned char)118;
unsigned long long int var_15 = 8110469441281398350ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
