#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-119;
short var_3 = (short)21154;
int var_4 = -1882010471;
int var_6 = 1684080489;
unsigned long long int var_9 = 3558309493460279797ULL;
unsigned short var_10 = (unsigned short)25329;
int zero = 0;
unsigned short var_19 = (unsigned short)28205;
unsigned char var_20 = (unsigned char)167;
unsigned long long int var_21 = 5731544185967634848ULL;
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
