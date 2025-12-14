#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45548;
unsigned char var_10 = (unsigned char)70;
unsigned short var_13 = (unsigned short)44812;
int zero = 0;
long long int var_14 = 848771632810194174LL;
signed char var_15 = (signed char)-100;
void init() {
}

void checksum() {
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
