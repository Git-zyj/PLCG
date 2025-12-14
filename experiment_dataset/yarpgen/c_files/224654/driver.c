#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-72;
int var_5 = -1240025953;
int var_7 = 266532118;
signed char var_9 = (signed char)54;
signed char var_10 = (signed char)-106;
unsigned char var_12 = (unsigned char)160;
int zero = 0;
unsigned char var_13 = (unsigned char)245;
int var_14 = 1091851999;
void init() {
}

void checksum() {
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
