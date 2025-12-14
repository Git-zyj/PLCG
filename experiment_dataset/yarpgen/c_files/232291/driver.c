#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned char var_7 = (unsigned char)58;
long long int var_11 = -4377368543204130304LL;
signed char var_13 = (signed char)44;
unsigned short var_15 = (unsigned short)20482;
int zero = 0;
unsigned short var_17 = (unsigned short)41021;
short var_18 = (short)-31296;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
