#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43807;
long long int var_2 = 5122936454443720014LL;
unsigned long long int var_3 = 6112921755267439662ULL;
long long int var_4 = 296707807502155822LL;
long long int var_7 = -2373599059092990687LL;
signed char var_10 = (signed char)-90;
int zero = 0;
unsigned short var_12 = (unsigned short)18708;
unsigned long long int var_13 = 7614901998697616766ULL;
short var_14 = (short)-14543;
short var_15 = (short)14299;
void init() {
}

void checksum() {
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
