#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -100183698101777963LL;
signed char var_1 = (signed char)-43;
signed char var_6 = (signed char)98;
int var_8 = -424953895;
unsigned long long int var_10 = 11398325465716485441ULL;
signed char var_15 = (signed char)60;
unsigned int var_17 = 2770024001U;
short var_18 = (short)-222;
int zero = 0;
signed char var_19 = (signed char)113;
short var_20 = (short)-17134;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
