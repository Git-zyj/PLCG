#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)15;
int var_3 = -1381749066;
unsigned short var_4 = (unsigned short)61282;
short var_5 = (short)-3686;
unsigned long long int var_6 = 14244998471142205009ULL;
int var_7 = 1335218618;
unsigned short var_11 = (unsigned short)8448;
short var_12 = (short)8661;
int zero = 0;
short var_14 = (short)-8198;
unsigned long long int var_15 = 6104470181533228388ULL;
short var_16 = (short)-26238;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
