#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-29;
int var_7 = -424001273;
short var_10 = (short)-24309;
int var_12 = -1247385013;
unsigned int var_16 = 3055036669U;
unsigned char var_18 = (unsigned char)35;
int zero = 0;
long long int var_20 = -5619337186232942149LL;
short var_21 = (short)12039;
short var_22 = (short)4645;
int var_23 = -1127722103;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
