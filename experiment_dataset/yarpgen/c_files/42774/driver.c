#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46990;
signed char var_3 = (signed char)121;
signed char var_5 = (signed char)-43;
unsigned short var_9 = (unsigned short)34321;
int zero = 0;
signed char var_10 = (signed char)-124;
int var_11 = -1509036923;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
