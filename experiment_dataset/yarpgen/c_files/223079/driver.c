#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13212;
signed char var_4 = (signed char)-104;
short var_7 = (short)3418;
unsigned char var_9 = (unsigned char)125;
signed char var_11 = (signed char)-64;
unsigned long long int var_13 = 4508041854660271236ULL;
int zero = 0;
signed char var_15 = (signed char)37;
long long int var_16 = 7751117930202855638LL;
int var_17 = 1849023995;
_Bool var_18 = (_Bool)0;
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
