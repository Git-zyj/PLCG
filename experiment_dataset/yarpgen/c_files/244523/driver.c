#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
unsigned short var_4 = (unsigned short)17107;
short var_7 = (short)19896;
unsigned char var_10 = (unsigned char)98;
unsigned short var_13 = (unsigned short)12872;
int zero = 0;
unsigned int var_17 = 347879458U;
unsigned long long int var_18 = 3176038805717345856ULL;
unsigned char var_19 = (unsigned char)174;
int var_20 = 1304756454;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
