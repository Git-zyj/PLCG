#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned char var_2 = (unsigned char)245;
unsigned char var_5 = (unsigned char)108;
int var_6 = 455884039;
int var_9 = 1808161626;
int var_10 = 1406348870;
int zero = 0;
signed char var_12 = (signed char)-24;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-31770;
unsigned int var_15 = 131677870U;
unsigned int var_16 = 2770786786U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
