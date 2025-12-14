#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 501721853;
unsigned int var_2 = 168813498U;
unsigned short var_3 = (unsigned short)41906;
long long int var_5 = -9099351938089398610LL;
unsigned int var_6 = 2067944244U;
long long int var_7 = -6119825432899560496LL;
signed char var_8 = (signed char)-50;
unsigned char var_11 = (unsigned char)83;
int zero = 0;
long long int var_12 = -6109927027346336999LL;
int var_13 = 766717971;
unsigned long long int var_14 = 14141501365249236167ULL;
void init() {
}

void checksum() {
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
