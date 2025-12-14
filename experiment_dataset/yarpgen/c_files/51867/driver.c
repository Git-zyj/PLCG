#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1080678416U;
short var_4 = (short)-13516;
unsigned int var_5 = 3974248709U;
unsigned char var_6 = (unsigned char)32;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)2860;
unsigned int var_11 = 1109806975U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)64523;
long long int var_14 = -1238514271637570916LL;
short var_15 = (short)-3096;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
