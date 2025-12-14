#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11016629752392496655ULL;
unsigned char var_1 = (unsigned char)135;
unsigned short var_2 = (unsigned short)16914;
short var_3 = (short)-11176;
short var_4 = (short)-7800;
int var_5 = -366811267;
unsigned char var_6 = (unsigned char)220;
short var_7 = (short)-15317;
unsigned char var_8 = (unsigned char)0;
signed char var_10 = (signed char)-88;
int zero = 0;
unsigned char var_11 = (unsigned char)104;
signed char var_12 = (signed char)-97;
unsigned short var_13 = (unsigned short)38072;
unsigned short var_14 = (unsigned short)52550;
void init() {
}

void checksum() {
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
