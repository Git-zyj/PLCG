#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9132114411462777142LL;
long long int var_4 = 7165583882689829825LL;
long long int var_5 = 684540498165161643LL;
short var_6 = (short)24592;
short var_7 = (short)-27660;
long long int var_8 = -7022842891233356016LL;
signed char var_9 = (signed char)-34;
unsigned long long int var_10 = 10929553158864245577ULL;
long long int var_11 = -7897749573680834705LL;
unsigned long long int var_12 = 11496945635855557014ULL;
unsigned long long int var_14 = 9738433476176047950ULL;
int zero = 0;
unsigned int var_16 = 3831511735U;
unsigned long long int var_17 = 15396940936632714203ULL;
long long int var_18 = -8986820755173601572LL;
void init() {
}

void checksum() {
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
