#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1413362791;
signed char var_7 = (signed char)-103;
unsigned int var_13 = 1542873414U;
long long int var_15 = -6508055081665972726LL;
int zero = 0;
unsigned short var_19 = (unsigned short)19697;
unsigned char var_20 = (unsigned char)32;
unsigned int var_21 = 3685409813U;
void init() {
}

void checksum() {
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
