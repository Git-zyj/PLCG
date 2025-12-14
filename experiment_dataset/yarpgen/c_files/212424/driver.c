#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5976;
signed char var_1 = (signed char)61;
signed char var_2 = (signed char)-64;
signed char var_4 = (signed char)123;
signed char var_5 = (signed char)-2;
unsigned long long int var_8 = 4742729349000342764ULL;
signed char var_9 = (signed char)-18;
long long int var_11 = -5926504599687671425LL;
int zero = 0;
long long int var_16 = -1166605836070210574LL;
short var_17 = (short)-4202;
short var_18 = (short)3853;
unsigned long long int var_19 = 7658062321360535885ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
