#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
unsigned char var_4 = (unsigned char)147;
int var_5 = -500604257;
short var_6 = (short)-11590;
unsigned int var_8 = 2108485325U;
unsigned char var_11 = (unsigned char)31;
long long int var_13 = -7850395100926012959LL;
unsigned int var_14 = 3692927957U;
int zero = 0;
unsigned short var_17 = (unsigned short)31204;
long long int var_18 = -6095370188976159832LL;
short var_19 = (short)22108;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
