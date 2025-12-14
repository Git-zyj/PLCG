#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5008217855886622729ULL;
unsigned long long int var_2 = 11121784039331516671ULL;
int var_6 = 1677005572;
unsigned char var_8 = (unsigned char)168;
unsigned char var_9 = (unsigned char)253;
int var_10 = 224941224;
unsigned long long int var_11 = 15911696556123478157ULL;
int zero = 0;
signed char var_16 = (signed char)-18;
unsigned char var_17 = (unsigned char)14;
long long int var_18 = -3550032647429713569LL;
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
