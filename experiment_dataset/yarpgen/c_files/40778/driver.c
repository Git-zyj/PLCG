#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
unsigned int var_3 = 289935899U;
short var_4 = (short)-11399;
long long int var_5 = -5097960144659945903LL;
short var_6 = (short)-943;
unsigned short var_7 = (unsigned short)21033;
long long int var_10 = -813898960810553235LL;
int zero = 0;
unsigned short var_11 = (unsigned short)17881;
unsigned int var_12 = 3765270542U;
unsigned short var_13 = (unsigned short)32352;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
