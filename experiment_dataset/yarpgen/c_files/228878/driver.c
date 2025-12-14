#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6913590977166372296LL;
unsigned int var_10 = 2291543550U;
long long int var_13 = 18588303040590803LL;
unsigned int var_19 = 2920323353U;
int zero = 0;
unsigned char var_20 = (unsigned char)181;
unsigned char var_21 = (unsigned char)226;
unsigned int var_22 = 4276428332U;
void init() {
}

void checksum() {
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
