#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)247;
long long int var_8 = -8933354487404690298LL;
unsigned long long int var_9 = 16877472735501476298ULL;
signed char var_12 = (signed char)44;
short var_13 = (short)-16537;
unsigned long long int var_15 = 76059012457753634ULL;
int zero = 0;
int var_17 = 943647460;
int var_18 = -523936238;
unsigned long long int var_19 = 17779558001437955444ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
