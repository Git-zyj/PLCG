#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16822;
unsigned short var_2 = (unsigned short)8353;
int var_3 = -1903208646;
unsigned char var_7 = (unsigned char)251;
unsigned long long int var_8 = 12701950953703290841ULL;
unsigned long long int var_9 = 10164289609339998671ULL;
unsigned long long int var_11 = 1526978023248129138ULL;
_Bool var_12 = (_Bool)1;
short var_15 = (short)-14325;
short var_16 = (short)-18746;
int zero = 0;
signed char var_19 = (signed char)40;
int var_20 = -1128321196;
unsigned char var_21 = (unsigned char)104;
unsigned int var_22 = 2813827570U;
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
