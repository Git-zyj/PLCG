#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)19;
signed char var_8 = (signed char)78;
short var_9 = (short)-10682;
unsigned long long int var_10 = 14070672303035672086ULL;
short var_11 = (short)19112;
int zero = 0;
long long int var_16 = 3662033668254008904LL;
unsigned long long int var_17 = 13558697648155458154ULL;
long long int var_18 = -4897604622787764515LL;
short var_19 = (short)16913;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
