#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
unsigned char var_1 = (unsigned char)148;
unsigned long long int var_5 = 8723241797795085320ULL;
short var_6 = (short)-30408;
long long int var_9 = 8773389277698659833LL;
int var_10 = 1453257328;
int zero = 0;
int var_11 = 317101555;
unsigned char var_12 = (unsigned char)177;
unsigned long long int var_13 = 5999917359847422893ULL;
unsigned int var_14 = 410964585U;
long long int var_15 = -8802210002952357LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
