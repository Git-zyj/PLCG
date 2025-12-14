#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
short var_1 = (short)-7460;
unsigned int var_2 = 1525856120U;
signed char var_5 = (signed char)64;
int var_6 = -1998756976;
unsigned char var_7 = (unsigned char)187;
signed char var_8 = (signed char)78;
int zero = 0;
short var_10 = (short)25976;
unsigned char var_11 = (unsigned char)155;
unsigned long long int var_12 = 6883414143386680303ULL;
unsigned int var_13 = 2956823365U;
unsigned int var_14 = 3803431145U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
