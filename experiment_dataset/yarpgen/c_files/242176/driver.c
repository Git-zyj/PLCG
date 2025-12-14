#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4333;
int var_2 = 498546905;
unsigned short var_3 = (unsigned short)15115;
unsigned long long int var_4 = 3046220129997171893ULL;
unsigned char var_6 = (unsigned char)41;
_Bool var_8 = (_Bool)0;
int var_11 = -916645824;
int zero = 0;
unsigned long long int var_12 = 16773868336523271654ULL;
_Bool var_13 = (_Bool)0;
int var_14 = 119253383;
int var_15 = -2133373487;
short var_16 = (short)526;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
