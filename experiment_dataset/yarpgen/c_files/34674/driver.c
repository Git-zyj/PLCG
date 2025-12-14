#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 537168908;
short var_1 = (short)20328;
unsigned int var_2 = 4233045319U;
unsigned long long int var_4 = 7894655222202541870ULL;
unsigned long long int var_5 = 9787533582319691822ULL;
int var_7 = 1649271406;
unsigned short var_8 = (unsigned short)13333;
unsigned int var_9 = 2604059646U;
int var_10 = -1448513393;
unsigned int var_12 = 2934301595U;
unsigned long long int var_14 = 1945747674828950486ULL;
unsigned int var_17 = 2914324653U;
int zero = 0;
unsigned long long int var_19 = 1870167127117755293ULL;
unsigned char var_20 = (unsigned char)196;
unsigned long long int var_21 = 10023269763375059226ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
