#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5703340658119811828ULL;
int var_4 = 1576376214;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)215;
signed char var_10 = (signed char)-35;
unsigned short var_16 = (unsigned short)43432;
unsigned char var_17 = (unsigned char)46;
int zero = 0;
unsigned char var_18 = (unsigned char)123;
unsigned long long int var_19 = 8614380049111234964ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
