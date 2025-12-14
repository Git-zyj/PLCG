#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23425;
unsigned short var_5 = (unsigned short)28372;
int var_6 = 923918121;
unsigned long long int var_10 = 3533617976687960381ULL;
int zero = 0;
unsigned int var_11 = 330716273U;
unsigned long long int var_12 = 18152673245901212206ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
