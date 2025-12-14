#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9145268522844513265ULL;
unsigned char var_1 = (unsigned char)195;
int var_2 = -402031028;
unsigned long long int var_3 = 12877877882792542642ULL;
unsigned char var_4 = (unsigned char)139;
signed char var_5 = (signed char)-10;
short var_6 = (short)-16140;
int var_7 = 15149377;
unsigned char var_8 = (unsigned char)142;
long long int var_9 = -3220082375277219661LL;
short var_10 = (short)-21391;
int zero = 0;
unsigned short var_11 = (unsigned short)14557;
unsigned char var_12 = (unsigned char)176;
unsigned int var_13 = 1575093437U;
long long int var_14 = -812268914100672738LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
