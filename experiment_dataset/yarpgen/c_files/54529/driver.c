#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)149;
unsigned int var_12 = 2336784498U;
short var_14 = (short)-11820;
int zero = 0;
int var_18 = -671939415;
unsigned int var_19 = 1191201558U;
unsigned char var_20 = (unsigned char)69;
int var_21 = -1332028841;
unsigned long long int var_22 = 1914165998991369623ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
