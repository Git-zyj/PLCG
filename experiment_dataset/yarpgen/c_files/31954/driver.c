#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8941208545948998973ULL;
unsigned long long int var_6 = 7726709562591512701ULL;
int var_8 = 46515028;
unsigned short var_9 = (unsigned short)52984;
short var_13 = (short)28267;
unsigned short var_14 = (unsigned short)38406;
unsigned long long int var_17 = 6829269171687565639ULL;
unsigned char var_18 = (unsigned char)28;
int zero = 0;
int var_20 = -1878318704;
unsigned short var_21 = (unsigned short)31291;
unsigned short var_22 = (unsigned short)22540;
unsigned long long int var_23 = 5477564226464561600ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
