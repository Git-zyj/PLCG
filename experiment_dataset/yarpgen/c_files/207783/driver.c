#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)15054;
long long int var_5 = -2877429181664204148LL;
long long int var_8 = -970186525141196041LL;
short var_10 = (short)31835;
short var_12 = (short)-6318;
unsigned long long int var_16 = 326229181371555785ULL;
int zero = 0;
long long int var_20 = -6173341233732541088LL;
short var_21 = (short)-32439;
unsigned int var_22 = 2656766875U;
short var_23 = (short)-23626;
short var_24 = (short)-24292;
short var_25 = (short)12865;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
