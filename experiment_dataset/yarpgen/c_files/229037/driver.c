#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
unsigned short var_8 = (unsigned short)47819;
signed char var_9 = (signed char)106;
long long int var_10 = 5597567325217997789LL;
int zero = 0;
unsigned char var_11 = (unsigned char)215;
unsigned long long int var_12 = 18323828537538376101ULL;
unsigned long long int var_13 = 16725272721914007037ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
