#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35298;
unsigned long long int var_1 = 11881253356576511053ULL;
unsigned int var_3 = 4158545482U;
unsigned short var_8 = (unsigned short)26900;
short var_9 = (short)14117;
unsigned long long int var_11 = 12433959027766182052ULL;
int zero = 0;
short var_19 = (short)-13040;
unsigned long long int var_20 = 6233709723383457930ULL;
short var_21 = (short)17208;
unsigned int var_22 = 175992073U;
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
