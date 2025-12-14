#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18778;
int var_5 = 854377306;
int var_8 = 1024539329;
unsigned char var_12 = (unsigned char)119;
unsigned char var_13 = (unsigned char)156;
unsigned int var_14 = 3308127341U;
int var_15 = -104350046;
int zero = 0;
unsigned short var_18 = (unsigned short)25629;
int var_19 = -1644028541;
int var_20 = 652085369;
unsigned char var_21 = (unsigned char)0;
int var_22 = 680033664;
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
