#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 568494803U;
unsigned long long int var_5 = 9329492633847229053ULL;
unsigned long long int var_9 = 16572277946390066130ULL;
unsigned short var_10 = (unsigned short)7963;
long long int var_12 = 1031075996552703999LL;
int zero = 0;
long long int var_13 = -1704537713075277980LL;
short var_14 = (short)26361;
signed char var_15 = (signed char)-53;
void init() {
}

void checksum() {
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
