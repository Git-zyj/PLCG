#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
unsigned char var_1 = (unsigned char)224;
short var_3 = (short)837;
unsigned short var_6 = (unsigned short)58104;
unsigned char var_7 = (unsigned char)79;
unsigned long long int var_9 = 4349808200502679271ULL;
unsigned char var_11 = (unsigned char)227;
int var_15 = -2102500434;
int zero = 0;
unsigned char var_18 = (unsigned char)68;
int var_19 = 1082581930;
short var_20 = (short)28818;
unsigned int var_21 = 2810956037U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
