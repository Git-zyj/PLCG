#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)867;
signed char var_2 = (signed char)-38;
unsigned long long int var_3 = 3040002024002507150ULL;
unsigned short var_4 = (unsigned short)31116;
unsigned char var_5 = (unsigned char)191;
short var_6 = (short)-10901;
long long int var_7 = -4088567203702044906LL;
short var_8 = (short)-15456;
unsigned int var_9 = 905861963U;
signed char var_12 = (signed char)-11;
int zero = 0;
unsigned char var_13 = (unsigned char)27;
unsigned long long int var_14 = 4330069847577406037ULL;
unsigned short var_15 = (unsigned short)23177;
void init() {
}

void checksum() {
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
