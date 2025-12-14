#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3146000531U;
unsigned int var_3 = 3186842761U;
int var_4 = 1064836742;
short var_5 = (short)-1494;
int var_7 = -2112164118;
int zero = 0;
signed char var_10 = (signed char)112;
unsigned long long int var_11 = 4973184137870816714ULL;
unsigned short var_12 = (unsigned short)38807;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
