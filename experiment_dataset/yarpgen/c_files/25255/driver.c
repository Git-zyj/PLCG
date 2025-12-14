#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
int var_2 = 1619667971;
int var_4 = -1319769208;
short var_7 = (short)-18917;
unsigned int var_9 = 4257132583U;
unsigned int var_10 = 1206688704U;
int zero = 0;
unsigned short var_11 = (unsigned short)14419;
int var_12 = -1972481294;
unsigned int var_13 = 4223120634U;
signed char var_14 = (signed char)-49;
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
