#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31631;
int var_2 = -1772252604;
unsigned char var_9 = (unsigned char)116;
int var_14 = 1663234735;
signed char var_17 = (signed char)26;
int zero = 0;
unsigned char var_19 = (unsigned char)150;
unsigned char var_20 = (unsigned char)98;
unsigned short var_21 = (unsigned short)28016;
unsigned char var_22 = (unsigned char)80;
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
