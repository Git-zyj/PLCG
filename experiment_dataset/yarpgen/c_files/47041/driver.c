#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
signed char var_1 = (signed char)56;
long long int var_2 = 2429693341608596195LL;
int var_5 = 1713967001;
short var_9 = (short)-12572;
int var_12 = -114214041;
int zero = 0;
int var_13 = -717353220;
unsigned short var_14 = (unsigned short)12174;
unsigned short var_15 = (unsigned short)6297;
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
