#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)201;
signed char var_3 = (signed char)8;
long long int var_5 = 5870749303361644657LL;
int var_6 = -1836089103;
long long int var_9 = -6418397127748884761LL;
unsigned int var_10 = 926452629U;
long long int var_14 = 4035895821446620773LL;
unsigned short var_15 = (unsigned short)31541;
unsigned char var_17 = (unsigned char)194;
int zero = 0;
unsigned short var_19 = (unsigned short)44941;
unsigned short var_20 = (unsigned short)1606;
int var_21 = -632215479;
int var_22 = -1112206675;
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
