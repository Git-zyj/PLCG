#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
long long int var_1 = 3282534952700285375LL;
short var_2 = (short)14017;
int var_5 = -1473931039;
signed char var_6 = (signed char)-90;
int var_7 = 1358479953;
unsigned char var_9 = (unsigned char)175;
unsigned int var_11 = 3099170272U;
unsigned long long int var_12 = 7330696854928370766ULL;
int zero = 0;
signed char var_13 = (signed char)30;
unsigned int var_14 = 2621464965U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
