#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4139383943U;
unsigned long long int var_5 = 137324990810932964ULL;
int var_6 = 1539912966;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)39965;
int var_17 = 1645920152;
int zero = 0;
short var_19 = (short)-14148;
unsigned short var_20 = (unsigned short)40267;
unsigned int var_21 = 1708455604U;
unsigned short var_22 = (unsigned short)61332;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
