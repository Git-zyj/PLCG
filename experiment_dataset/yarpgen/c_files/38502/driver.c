#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
int var_2 = -326878494;
unsigned int var_3 = 1331054474U;
short var_6 = (short)10867;
short var_7 = (short)-19238;
unsigned long long int var_8 = 11438232596864295135ULL;
short var_9 = (short)-27376;
int zero = 0;
unsigned long long int var_12 = 2568814000315561225ULL;
signed char var_13 = (signed char)108;
signed char var_14 = (signed char)74;
unsigned long long int var_15 = 8883884823633044793ULL;
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
