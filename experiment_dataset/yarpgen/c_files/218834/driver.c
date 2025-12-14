#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
unsigned long long int var_1 = 12300914222169312189ULL;
long long int var_2 = -6463772705295189575LL;
unsigned int var_3 = 521098081U;
unsigned long long int var_4 = 17345288206484387198ULL;
int var_5 = -1036925035;
unsigned char var_6 = (unsigned char)135;
unsigned short var_7 = (unsigned short)2571;
signed char var_8 = (signed char)-27;
long long int var_9 = 6638865636265654121LL;
int zero = 0;
unsigned short var_10 = (unsigned short)34014;
signed char var_11 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
