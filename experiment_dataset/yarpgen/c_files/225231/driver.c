#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4104;
unsigned short var_3 = (unsigned short)10575;
long long int var_9 = 2674305088502886922LL;
long long int var_12 = 2441284862543927044LL;
int zero = 0;
long long int var_17 = 551185973304096451LL;
long long int var_18 = 5092927202257165866LL;
unsigned int var_19 = 966267041U;
unsigned short var_20 = (unsigned short)27761;
unsigned short var_21 = (unsigned short)49561;
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
