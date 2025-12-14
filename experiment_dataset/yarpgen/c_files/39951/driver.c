#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)106;
unsigned char var_9 = (unsigned char)43;
int var_10 = 2062642451;
int zero = 0;
unsigned short var_20 = (unsigned short)14115;
int var_21 = 648877037;
unsigned long long int var_22 = 16430516965960694170ULL;
short var_23 = (short)-24084;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
