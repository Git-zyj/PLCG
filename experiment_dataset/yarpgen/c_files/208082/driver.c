#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6751247109005921626ULL;
signed char var_9 = (signed char)78;
int var_13 = 1181414715;
unsigned short var_14 = (unsigned short)38850;
int zero = 0;
signed char var_20 = (signed char)-120;
signed char var_21 = (signed char)62;
int var_22 = 2054971917;
short var_23 = (short)-10485;
unsigned char var_24 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
