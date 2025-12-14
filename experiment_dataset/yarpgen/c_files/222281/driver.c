#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17635514210070676088ULL;
int var_1 = 1079126586;
unsigned short var_2 = (unsigned short)19060;
signed char var_6 = (signed char)3;
unsigned long long int var_9 = 13323107174925139197ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)153;
signed char var_11 = (signed char)35;
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
