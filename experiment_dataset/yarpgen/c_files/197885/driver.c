#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-80;
unsigned long long int var_4 = 8846231899386273158ULL;
short var_5 = (short)-21342;
unsigned long long int var_6 = 5408502191595004350ULL;
unsigned long long int var_8 = 3956773422513692032ULL;
int var_9 = -1382021490;
signed char var_10 = (signed char)-78;
unsigned long long int var_11 = 17160048993992818665ULL;
int zero = 0;
short var_14 = (short)20488;
unsigned long long int var_15 = 17653778613440122901ULL;
unsigned int var_16 = 2007904813U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
