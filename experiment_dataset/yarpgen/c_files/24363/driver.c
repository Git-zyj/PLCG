#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)19;
short var_6 = (short)27836;
short var_8 = (short)-29369;
unsigned long long int var_13 = 7317251896672078742ULL;
int zero = 0;
unsigned int var_19 = 3740870632U;
unsigned short var_20 = (unsigned short)59423;
unsigned long long int var_21 = 2678959882495887069ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
