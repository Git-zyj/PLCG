#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -672159591;
unsigned char var_7 = (unsigned char)155;
unsigned short var_8 = (unsigned short)14512;
int zero = 0;
unsigned int var_11 = 2295764619U;
short var_12 = (short)-29557;
void init() {
}

void checksum() {
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
