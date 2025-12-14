#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14994;
int var_4 = 868705823;
short var_5 = (short)-27012;
int var_7 = 244040074;
int var_9 = 1969464020;
signed char var_12 = (signed char)30;
short var_14 = (short)29843;
short var_16 = (short)-9288;
int zero = 0;
signed char var_17 = (signed char)-54;
signed char var_18 = (signed char)87;
unsigned int var_19 = 2356978925U;
unsigned int var_20 = 1878501152U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
