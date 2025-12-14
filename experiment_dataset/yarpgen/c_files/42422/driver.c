#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
short var_1 = (short)-26308;
short var_3 = (short)-10425;
unsigned short var_6 = (unsigned short)22027;
unsigned short var_9 = (unsigned short)38294;
int zero = 0;
unsigned char var_12 = (unsigned char)161;
short var_13 = (short)23939;
short var_14 = (short)-5600;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
