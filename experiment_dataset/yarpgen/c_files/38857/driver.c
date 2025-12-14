#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8004288535274486697LL;
int var_6 = -380071643;
unsigned int var_8 = 1944185383U;
long long int var_9 = 92583248598937619LL;
unsigned short var_11 = (unsigned short)3269;
long long int var_12 = -1494878988057171124LL;
int zero = 0;
signed char var_14 = (signed char)-91;
unsigned short var_15 = (unsigned short)53101;
unsigned short var_16 = (unsigned short)42051;
long long int var_17 = -2191310050775005934LL;
signed char var_18 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
