#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6266;
unsigned short var_2 = (unsigned short)4411;
unsigned int var_3 = 2042955313U;
unsigned short var_4 = (unsigned short)26887;
unsigned long long int var_6 = 10050360950383576214ULL;
int var_10 = 1157170634;
int var_14 = -673881130;
int zero = 0;
int var_15 = 1401705580;
unsigned int var_16 = 3306169047U;
unsigned int var_17 = 44196383U;
unsigned short var_18 = (unsigned short)8828;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
