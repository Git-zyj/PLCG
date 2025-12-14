#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57660;
unsigned int var_2 = 1480817991U;
int var_3 = -1465895235;
short var_8 = (short)886;
unsigned short var_9 = (unsigned short)37486;
unsigned short var_10 = (unsigned short)7728;
int zero = 0;
unsigned char var_11 = (unsigned char)2;
unsigned int var_12 = 2120824719U;
unsigned char var_13 = (unsigned char)85;
unsigned long long int var_14 = 2814963861099299578ULL;
long long int var_15 = -2867854893977257214LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
