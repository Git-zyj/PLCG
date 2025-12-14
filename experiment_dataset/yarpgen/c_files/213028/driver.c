#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1467474522U;
int var_2 = -1078403712;
unsigned short var_4 = (unsigned short)11812;
unsigned int var_5 = 2746938555U;
short var_8 = (short)-28821;
int zero = 0;
int var_11 = -2098831089;
short var_12 = (short)-31947;
void init() {
}

void checksum() {
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
