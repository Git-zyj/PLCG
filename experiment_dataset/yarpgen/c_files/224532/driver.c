#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
signed char var_1 = (signed char)-107;
_Bool var_2 = (_Bool)0;
int var_3 = 1353727895;
unsigned int var_6 = 2977032745U;
int var_7 = 1165198424;
short var_8 = (short)-8218;
int zero = 0;
int var_11 = 327634579;
int var_12 = -236333197;
short var_13 = (short)31657;
unsigned int var_14 = 761259966U;
unsigned long long int var_15 = 355935343748899453ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
