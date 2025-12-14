#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25116;
unsigned int var_4 = 1110189096U;
unsigned long long int var_7 = 18006810576135523286ULL;
unsigned char var_8 = (unsigned char)149;
int var_9 = 1111145684;
long long int var_10 = -3510968813867039583LL;
int zero = 0;
signed char var_14 = (signed char)34;
short var_15 = (short)10620;
short var_16 = (short)-13785;
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
