#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1102727044;
signed char var_6 = (signed char)84;
unsigned char var_8 = (unsigned char)191;
unsigned long long int var_12 = 4825918450582808698ULL;
unsigned long long int var_15 = 1879954623802726121ULL;
int zero = 0;
long long int var_18 = -2161449702875375688LL;
unsigned short var_19 = (unsigned short)33886;
signed char var_20 = (signed char)-70;
_Bool var_21 = (_Bool)1;
short var_22 = (short)8458;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
