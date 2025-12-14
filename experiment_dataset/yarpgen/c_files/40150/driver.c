#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3178050414597385199ULL;
signed char var_2 = (signed char)-108;
unsigned long long int var_6 = 8100209582988330888ULL;
unsigned char var_7 = (unsigned char)19;
int zero = 0;
unsigned int var_12 = 2965823189U;
short var_13 = (short)-20307;
unsigned int var_14 = 3132659848U;
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
