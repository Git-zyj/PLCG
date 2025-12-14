#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
long long int var_1 = -4561405818073914632LL;
short var_3 = (short)-7543;
unsigned short var_7 = (unsigned short)6950;
unsigned short var_8 = (unsigned short)54859;
unsigned char var_10 = (unsigned char)36;
short var_11 = (short)-27895;
int zero = 0;
unsigned short var_12 = (unsigned short)22962;
unsigned short var_13 = (unsigned short)3056;
long long int var_14 = -6263288153541247596LL;
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
