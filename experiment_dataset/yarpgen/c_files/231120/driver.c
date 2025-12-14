#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3506213392U;
short var_4 = (short)-2993;
long long int var_5 = -2232689136063094450LL;
int var_7 = -1715808213;
short var_9 = (short)-10466;
int var_11 = -492942633;
unsigned char var_13 = (unsigned char)244;
unsigned int var_14 = 2132206609U;
int zero = 0;
short var_15 = (short)-18547;
unsigned short var_16 = (unsigned short)7174;
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
