#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)120;
unsigned int var_4 = 842724663U;
long long int var_7 = -4782131388012200561LL;
int var_9 = -352176199;
unsigned short var_10 = (unsigned short)19590;
int zero = 0;
unsigned short var_11 = (unsigned short)42898;
long long int var_12 = -8420304316788543083LL;
unsigned short var_13 = (unsigned short)20444;
unsigned short var_14 = (unsigned short)19117;
unsigned char var_15 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
