#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned long long int var_1 = 7292577592206592423ULL;
unsigned char var_3 = (unsigned char)134;
signed char var_5 = (signed char)77;
short var_6 = (short)-27550;
unsigned char var_8 = (unsigned char)94;
short var_10 = (short)8079;
int zero = 0;
signed char var_11 = (signed char)98;
signed char var_12 = (signed char)-75;
unsigned short var_13 = (unsigned short)22376;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
