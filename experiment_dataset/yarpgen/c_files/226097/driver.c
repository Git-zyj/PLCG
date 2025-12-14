#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -829173002;
unsigned short var_3 = (unsigned short)16779;
signed char var_5 = (signed char)-85;
short var_6 = (short)22012;
short var_7 = (short)-11302;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1070461791U;
long long int var_14 = 4949574044789623651LL;
unsigned char var_15 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
