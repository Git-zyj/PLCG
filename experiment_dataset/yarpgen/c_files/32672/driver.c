#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-23898;
short var_7 = (short)1240;
signed char var_10 = (signed char)69;
long long int var_12 = 4265507762638920575LL;
int zero = 0;
unsigned char var_17 = (unsigned char)102;
unsigned int var_18 = 1185685896U;
long long int var_19 = 7784396719387288135LL;
signed char var_20 = (signed char)38;
short var_21 = (short)-22672;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
