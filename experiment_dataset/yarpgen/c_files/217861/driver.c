#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
int var_1 = -366708894;
short var_4 = (short)16413;
unsigned short var_5 = (unsigned short)17765;
signed char var_6 = (signed char)-48;
signed char var_7 = (signed char)46;
int zero = 0;
unsigned int var_11 = 240239738U;
unsigned long long int var_12 = 198264628706130657ULL;
signed char var_13 = (signed char)7;
int var_14 = -271136368;
int var_15 = 188155864;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
