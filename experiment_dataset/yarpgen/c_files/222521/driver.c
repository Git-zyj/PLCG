#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
long long int var_1 = -6972272586460244089LL;
unsigned char var_3 = (unsigned char)12;
long long int var_4 = -8265922337315330669LL;
long long int var_5 = 5656106688480505773LL;
long long int var_6 = 9188539194520181242LL;
unsigned char var_7 = (unsigned char)123;
long long int var_8 = -8574740214914974803LL;
unsigned char var_9 = (unsigned char)253;
unsigned char var_10 = (unsigned char)3;
unsigned char var_12 = (unsigned char)183;
unsigned char var_13 = (unsigned char)66;
int zero = 0;
unsigned char var_14 = (unsigned char)33;
long long int var_15 = -8526980434029281320LL;
unsigned char var_16 = (unsigned char)43;
long long int var_17 = -1836669196423865965LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
