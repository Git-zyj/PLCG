#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1920923513;
short var_6 = (short)8522;
short var_9 = (short)14772;
unsigned char var_12 = (unsigned char)214;
int var_15 = -984922821;
unsigned long long int var_18 = 17971245826843132618ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)48593;
short var_20 = (short)27391;
signed char var_21 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
