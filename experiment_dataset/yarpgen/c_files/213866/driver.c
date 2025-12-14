#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 628943858U;
long long int var_1 = 4811205488559846588LL;
int var_4 = -13822437;
unsigned char var_9 = (unsigned char)16;
int var_12 = -673201116;
short var_14 = (short)14324;
int zero = 0;
unsigned short var_18 = (unsigned short)19656;
unsigned short var_19 = (unsigned short)14085;
unsigned int var_20 = 3650148816U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
