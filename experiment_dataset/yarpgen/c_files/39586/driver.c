#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27220;
unsigned char var_5 = (unsigned char)224;
unsigned char var_6 = (unsigned char)108;
unsigned char var_9 = (unsigned char)104;
unsigned char var_11 = (unsigned char)21;
unsigned long long int var_16 = 7860383758236550746ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)37173;
unsigned int var_18 = 2806816202U;
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
