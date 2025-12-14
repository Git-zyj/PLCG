#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5174;
short var_3 = (short)17601;
unsigned char var_4 = (unsigned char)122;
long long int var_5 = 4432108341491607082LL;
unsigned long long int var_7 = 673381253493623566ULL;
unsigned char var_8 = (unsigned char)89;
unsigned short var_9 = (unsigned short)52328;
int zero = 0;
signed char var_10 = (signed char)-68;
unsigned char var_11 = (unsigned char)212;
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
