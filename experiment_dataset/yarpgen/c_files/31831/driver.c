#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1761790641;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)43;
signed char var_8 = (signed char)-48;
unsigned int var_9 = 1154170465U;
int zero = 0;
int var_12 = 460077411;
unsigned int var_13 = 702675115U;
unsigned char var_14 = (unsigned char)50;
void init() {
}

void checksum() {
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
