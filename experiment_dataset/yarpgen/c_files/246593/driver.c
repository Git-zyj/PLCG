#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -556644188177635802LL;
short var_6 = (short)-19544;
unsigned int var_7 = 587579551U;
int zero = 0;
unsigned int var_10 = 3960758051U;
unsigned char var_11 = (unsigned char)164;
int var_12 = -1287999089;
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
