#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -587800313;
unsigned int var_1 = 1879014540U;
unsigned char var_3 = (unsigned char)245;
unsigned int var_4 = 2464323224U;
short var_5 = (short)4659;
unsigned int var_8 = 1733613977U;
unsigned short var_9 = (unsigned short)26256;
unsigned int var_12 = 3549836120U;
short var_13 = (short)-95;
unsigned short var_14 = (unsigned short)45203;
int zero = 0;
unsigned long long int var_18 = 10556881595117064044ULL;
signed char var_19 = (signed char)-112;
signed char var_20 = (signed char)81;
short var_21 = (short)32677;
short var_22 = (short)-27833;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
