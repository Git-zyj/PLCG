#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7198337559842768780LL;
unsigned int var_4 = 2083026541U;
signed char var_6 = (signed char)48;
long long int var_8 = 528758072502148621LL;
long long int var_12 = -2724970217966517824LL;
unsigned short var_16 = (unsigned short)50545;
int zero = 0;
unsigned char var_20 = (unsigned char)25;
signed char var_21 = (signed char)56;
void init() {
}

void checksum() {
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
