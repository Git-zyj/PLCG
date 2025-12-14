#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2089235117;
unsigned long long int var_3 = 18191904712740548249ULL;
unsigned int var_4 = 1201829799U;
int var_5 = 309173286;
unsigned char var_6 = (unsigned char)15;
unsigned short var_8 = (unsigned short)34476;
long long int var_10 = -5973510819173584700LL;
signed char var_11 = (signed char)-50;
int zero = 0;
unsigned long long int var_12 = 16426436394314591524ULL;
signed char var_13 = (signed char)-35;
int var_14 = -1599411226;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
