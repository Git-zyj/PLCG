#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1199731993;
unsigned long long int var_7 = 12473383617057880985ULL;
unsigned short var_9 = (unsigned short)29889;
int var_10 = 1915320963;
unsigned char var_11 = (unsigned char)113;
int zero = 0;
unsigned long long int var_17 = 6958442485037727147ULL;
unsigned long long int var_18 = 15778314902099901047ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
