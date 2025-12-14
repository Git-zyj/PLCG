#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3198325296U;
short var_8 = (short)-8692;
unsigned char var_10 = (unsigned char)110;
int zero = 0;
unsigned short var_20 = (unsigned short)41296;
unsigned int var_21 = 3670676539U;
unsigned int var_22 = 1839976178U;
void init() {
}

void checksum() {
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
