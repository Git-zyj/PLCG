#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8494771068844931818ULL;
unsigned long long int var_2 = 5363053128141172910ULL;
unsigned short var_6 = (unsigned short)49095;
unsigned long long int var_7 = 8062089856070477119ULL;
unsigned char var_8 = (unsigned char)230;
int var_9 = 1778605928;
long long int var_12 = 4861097707135931491LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)59379;
short var_16 = (short)-14473;
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
