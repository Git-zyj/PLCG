#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
unsigned long long int var_2 = 4253595688873088374ULL;
int var_4 = -1997374373;
short var_8 = (short)38;
unsigned long long int var_9 = 1307302535745665444ULL;
unsigned char var_10 = (unsigned char)241;
int zero = 0;
unsigned char var_15 = (unsigned char)168;
unsigned char var_16 = (unsigned char)221;
short var_17 = (short)-24625;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
