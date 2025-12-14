#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12998;
unsigned char var_4 = (unsigned char)58;
unsigned char var_6 = (unsigned char)19;
long long int var_7 = -1800235181378410822LL;
int var_9 = 1321684050;
unsigned char var_10 = (unsigned char)167;
int zero = 0;
unsigned short var_11 = (unsigned short)57918;
unsigned int var_12 = 522808276U;
unsigned int var_13 = 3331024260U;
unsigned short var_14 = (unsigned short)43121;
unsigned char var_15 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
