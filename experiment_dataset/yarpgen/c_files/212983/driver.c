#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1223995056;
short var_4 = (short)21394;
unsigned int var_6 = 3197584626U;
long long int var_10 = 2469080414193779676LL;
int zero = 0;
int var_16 = 49192646;
long long int var_17 = 4150639748137040327LL;
short var_18 = (short)21085;
unsigned short var_19 = (unsigned short)28962;
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
