#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61467;
unsigned int var_2 = 2411670158U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-3369;
unsigned long long int var_9 = 18342685475233912159ULL;
unsigned int var_11 = 517061085U;
int var_15 = 1307007116;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)235;
unsigned short var_19 = (unsigned short)21332;
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
