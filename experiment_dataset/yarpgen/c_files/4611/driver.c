#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)522;
short var_6 = (short)-17718;
unsigned long long int var_9 = 14264495579888848933ULL;
long long int var_10 = 3803458192619678068LL;
signed char var_12 = (signed char)110;
long long int var_13 = -5982697007053695283LL;
int zero = 0;
short var_15 = (short)-19890;
unsigned short var_16 = (unsigned short)50983;
void init() {
}

void checksum() {
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
