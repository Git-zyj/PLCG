#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7780125098307869660LL;
unsigned long long int var_1 = 5510513226960580383ULL;
unsigned char var_3 = (unsigned char)225;
unsigned long long int var_4 = 9959258871345647498ULL;
signed char var_5 = (signed char)-126;
int var_6 = 665351479;
int var_7 = 2121977346;
short var_9 = (short)4563;
unsigned int var_10 = 4183467643U;
signed char var_11 = (signed char)8;
int zero = 0;
short var_12 = (short)-12006;
unsigned int var_13 = 1377046473U;
int var_14 = 432264028;
unsigned long long int var_15 = 5299845193180421581ULL;
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
