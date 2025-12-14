#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)127;
unsigned long long int var_2 = 6206057348021407594ULL;
unsigned int var_10 = 3516437374U;
int zero = 0;
long long int var_12 = 3097752234013648938LL;
unsigned short var_13 = (unsigned short)27654;
unsigned short var_14 = (unsigned short)60613;
signed char var_15 = (signed char)-43;
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
