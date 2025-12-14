#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1577304025;
unsigned int var_3 = 227113948U;
unsigned int var_4 = 581043554U;
short var_6 = (short)-15295;
unsigned int var_9 = 578087479U;
int var_12 = -1259728083;
int var_13 = -779013013;
short var_15 = (short)-3502;
int zero = 0;
unsigned int var_18 = 3231017278U;
short var_19 = (short)-3114;
unsigned int var_20 = 1945791463U;
void init() {
}

void checksum() {
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
