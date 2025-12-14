#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26343;
unsigned char var_1 = (unsigned char)17;
unsigned int var_2 = 1753273069U;
unsigned short var_4 = (unsigned short)27255;
unsigned short var_6 = (unsigned short)47172;
short var_7 = (short)-28864;
short var_8 = (short)-10842;
unsigned int var_9 = 3981591626U;
short var_12 = (short)11617;
unsigned long long int var_13 = 905679574865821353ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)18457;
int var_15 = -427155545;
unsigned char var_16 = (unsigned char)216;
unsigned long long int var_17 = 13582442313652829677ULL;
unsigned short var_18 = (unsigned short)45003;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
