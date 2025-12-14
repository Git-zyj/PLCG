#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31659;
unsigned char var_2 = (unsigned char)123;
unsigned long long int var_3 = 15846713495385278836ULL;
signed char var_8 = (signed char)121;
int var_9 = -1326410183;
unsigned long long int var_12 = 10294943855555611148ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)-7852;
unsigned short var_18 = (unsigned short)17762;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
