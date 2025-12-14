#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 518633876;
unsigned char var_3 = (unsigned char)113;
unsigned short var_7 = (unsigned short)17045;
unsigned long long int var_9 = 4347257518817871298ULL;
signed char var_11 = (signed char)-47;
unsigned char var_12 = (unsigned char)118;
unsigned char var_13 = (unsigned char)184;
unsigned long long int var_15 = 1511529292012702421ULL;
int var_16 = 1749200249;
unsigned short var_17 = (unsigned short)35615;
int zero = 0;
int var_18 = 749851887;
unsigned short var_19 = (unsigned short)16648;
short var_20 = (short)-25257;
unsigned char var_21 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
