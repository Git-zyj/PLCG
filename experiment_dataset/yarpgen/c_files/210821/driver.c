#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5011;
signed char var_1 = (signed char)50;
short var_3 = (short)-29195;
short var_4 = (short)-31550;
unsigned long long int var_5 = 3220518910931957892ULL;
int var_7 = 1773971512;
unsigned short var_9 = (unsigned short)54982;
short var_10 = (short)-8607;
unsigned long long int var_11 = 527831015256587032ULL;
int zero = 0;
signed char var_16 = (signed char)123;
unsigned long long int var_17 = 12537980994476161360ULL;
unsigned long long int var_18 = 9116053851291538519ULL;
unsigned short var_19 = (unsigned short)30239;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
