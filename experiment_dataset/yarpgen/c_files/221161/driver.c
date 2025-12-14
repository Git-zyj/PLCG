#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8603907443667640744LL;
short var_2 = (short)3600;
short var_4 = (short)32410;
signed char var_7 = (signed char)82;
signed char var_10 = (signed char)-53;
unsigned int var_12 = 161245599U;
long long int var_13 = -4879766261304065992LL;
unsigned char var_15 = (unsigned char)152;
int zero = 0;
signed char var_16 = (signed char)103;
unsigned long long int var_17 = 15775236321308781711ULL;
unsigned long long int var_18 = 13780546283609933970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
