#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-19659;
unsigned short var_12 = (unsigned short)61368;
unsigned int var_13 = 1190156045U;
int var_19 = 276656642;
int zero = 0;
short var_20 = (short)-12484;
long long int var_21 = 7213615211137872667LL;
unsigned int var_22 = 809461959U;
unsigned long long int var_23 = 18331489531444528738ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
