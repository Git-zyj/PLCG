#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 619279714U;
unsigned char var_6 = (unsigned char)91;
short var_7 = (short)29491;
unsigned char var_8 = (unsigned char)31;
int zero = 0;
short var_20 = (short)18472;
unsigned long long int var_21 = 3130470770960982265ULL;
void init() {
}

void checksum() {
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
