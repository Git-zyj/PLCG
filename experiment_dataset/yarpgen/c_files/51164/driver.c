#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
long long int var_3 = -4613872447435044681LL;
unsigned short var_5 = (unsigned short)18736;
unsigned long long int var_7 = 7216320039545052075ULL;
short var_8 = (short)-4089;
int var_10 = 1481145942;
short var_13 = (short)1331;
unsigned char var_15 = (unsigned char)195;
int var_18 = 2014337787;
unsigned short var_19 = (unsigned short)7062;
int zero = 0;
short var_20 = (short)-2003;
unsigned long long int var_21 = 9500521569802820447ULL;
void init() {
}

void checksum() {
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
