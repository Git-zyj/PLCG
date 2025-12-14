#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)171;
signed char var_5 = (signed char)-124;
unsigned short var_9 = (unsigned short)16986;
int var_10 = -1029540062;
short var_14 = (short)-24631;
int zero = 0;
long long int var_19 = -2673044016036743471LL;
unsigned char var_20 = (unsigned char)153;
unsigned short var_21 = (unsigned short)21053;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
