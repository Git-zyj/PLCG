#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
unsigned short var_1 = (unsigned short)23173;
short var_2 = (short)-5313;
unsigned int var_3 = 3307852791U;
signed char var_4 = (signed char)71;
signed char var_5 = (signed char)-5;
unsigned short var_6 = (unsigned short)35183;
unsigned char var_7 = (unsigned char)195;
int var_8 = 367138961;
signed char var_9 = (signed char)-74;
int zero = 0;
unsigned short var_10 = (unsigned short)8794;
short var_11 = (short)22163;
unsigned char var_12 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
