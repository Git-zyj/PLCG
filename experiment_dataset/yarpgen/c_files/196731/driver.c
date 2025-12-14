#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5719;
int var_1 = -350604824;
unsigned int var_6 = 64412087U;
unsigned char var_9 = (unsigned char)68;
int zero = 0;
unsigned char var_10 = (unsigned char)95;
unsigned char var_11 = (unsigned char)197;
unsigned char var_12 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
