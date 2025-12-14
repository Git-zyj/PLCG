#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4052306393U;
unsigned short var_4 = (unsigned short)7958;
unsigned short var_5 = (unsigned short)12363;
unsigned char var_6 = (unsigned char)228;
short var_9 = (short)28900;
unsigned long long int var_17 = 9569594690585764201ULL;
int zero = 0;
short var_18 = (short)19744;
short var_19 = (short)-3897;
void init() {
}

void checksum() {
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
