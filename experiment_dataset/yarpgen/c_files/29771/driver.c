#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-3748;
long long int var_8 = -3235982868200482192LL;
long long int var_9 = 7194911193251092140LL;
unsigned char var_11 = (unsigned char)125;
signed char var_12 = (signed char)-80;
int zero = 0;
unsigned char var_13 = (unsigned char)205;
unsigned int var_14 = 3128733414U;
void init() {
}

void checksum() {
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
