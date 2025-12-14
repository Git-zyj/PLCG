#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20095;
long long int var_4 = -3148677558702021213LL;
long long int var_5 = -3054385943192399886LL;
int var_6 = -1216064190;
long long int var_11 = 8579519229191646320LL;
short var_12 = (short)31409;
short var_13 = (short)-10559;
signed char var_17 = (signed char)64;
int zero = 0;
int var_19 = -1919503998;
signed char var_20 = (signed char)-83;
long long int var_21 = 6040500400456838012LL;
int var_22 = 867144689;
void init() {
}

void checksum() {
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
