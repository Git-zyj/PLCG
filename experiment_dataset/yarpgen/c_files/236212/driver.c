#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-51;
unsigned long long int var_11 = 4217024798907090674ULL;
unsigned char var_14 = (unsigned char)3;
unsigned long long int var_15 = 12618635666521023233ULL;
unsigned int var_16 = 1078347937U;
int zero = 0;
int var_19 = 44481590;
short var_20 = (short)-21385;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
