#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4746434518227883498ULL;
signed char var_3 = (signed char)-74;
signed char var_6 = (signed char)-120;
int var_7 = -1049688966;
signed char var_9 = (signed char)107;
long long int var_13 = 1775627065751715978LL;
int zero = 0;
short var_15 = (short)-26193;
unsigned int var_16 = 1300026119U;
int var_17 = 1723402310;
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
