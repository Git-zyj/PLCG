#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29889;
long long int var_1 = -8741521423113132129LL;
short var_2 = (short)12912;
int var_3 = -372984092;
short var_4 = (short)-15307;
short var_5 = (short)16369;
unsigned char var_6 = (unsigned char)0;
long long int var_7 = -4720826079579723757LL;
short var_8 = (short)-21082;
unsigned char var_9 = (unsigned char)150;
int zero = 0;
short var_10 = (short)26440;
unsigned char var_11 = (unsigned char)118;
unsigned char var_12 = (unsigned char)57;
long long int var_13 = -4717963491341508398LL;
int var_14 = 1621240195;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
