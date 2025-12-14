#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4021;
long long int var_4 = -2083508790150909671LL;
signed char var_6 = (signed char)33;
unsigned long long int var_9 = 9589203644862259560ULL;
int var_10 = -325726249;
unsigned int var_13 = 1238047605U;
int zero = 0;
unsigned long long int var_14 = 9952885062861866534ULL;
signed char var_15 = (signed char)-122;
void init() {
}

void checksum() {
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
