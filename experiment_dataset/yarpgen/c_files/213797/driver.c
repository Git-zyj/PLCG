#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)200;
unsigned short var_8 = (unsigned short)51895;
signed char var_9 = (signed char)-67;
unsigned int var_10 = 169279141U;
unsigned int var_11 = 69171065U;
int zero = 0;
signed char var_12 = (signed char)50;
unsigned short var_13 = (unsigned short)41656;
unsigned char var_14 = (unsigned char)94;
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
