#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54564;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 393607047U;
unsigned char var_8 = (unsigned char)100;
unsigned long long int var_11 = 10594120236086844370ULL;
unsigned long long int var_12 = 3678090087406547827ULL;
signed char var_14 = (signed char)-22;
unsigned char var_15 = (unsigned char)65;
int zero = 0;
unsigned long long int var_19 = 18187262008172173158ULL;
long long int var_20 = 4093359380919024632LL;
unsigned long long int var_21 = 10002023877280597120ULL;
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
