#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4853124993768196009LL;
short var_1 = (short)-13091;
unsigned short var_3 = (unsigned short)64112;
signed char var_7 = (signed char)-82;
unsigned short var_8 = (unsigned short)52285;
long long int var_9 = 1548261935027641270LL;
long long int var_12 = -753702213400537715LL;
long long int var_13 = 6535636557262376392LL;
unsigned long long int var_14 = 12466960077109042895ULL;
unsigned int var_15 = 2772775146U;
signed char var_16 = (signed char)107;
int zero = 0;
int var_18 = -1690943998;
int var_19 = 1106429406;
long long int var_20 = -4156108638840368601LL;
void init() {
}

void checksum() {
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
