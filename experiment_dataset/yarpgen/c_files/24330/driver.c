#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
int var_1 = 1128211042;
unsigned short var_3 = (unsigned short)39232;
short var_5 = (short)-30172;
unsigned long long int var_6 = 14307873312230261087ULL;
signed char var_7 = (signed char)-82;
short var_8 = (short)22483;
unsigned short var_9 = (unsigned short)64396;
int zero = 0;
int var_10 = -2113185262;
signed char var_11 = (signed char)113;
unsigned short var_12 = (unsigned short)1668;
short var_13 = (short)-5044;
unsigned char var_14 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
