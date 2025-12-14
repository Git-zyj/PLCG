#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1780099539;
unsigned long long int var_9 = 18411891239534505750ULL;
unsigned long long int var_10 = 15588573546370112797ULL;
long long int var_15 = 2407560612739615615LL;
short var_17 = (short)15956;
int zero = 0;
long long int var_18 = 6018793724682643282LL;
signed char var_19 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
