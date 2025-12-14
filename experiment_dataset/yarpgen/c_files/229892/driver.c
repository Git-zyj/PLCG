#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22096;
unsigned int var_7 = 1428547011U;
unsigned long long int var_12 = 4992287945904267870ULL;
int zero = 0;
int var_18 = -409613076;
long long int var_19 = -225301229880032913LL;
int var_20 = 1847929959;
signed char var_21 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
