#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)58;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 18388819935359794694ULL;
long long int var_10 = 8583436514371951254LL;
int zero = 0;
unsigned int var_11 = 2415340376U;
unsigned char var_12 = (unsigned char)225;
int var_13 = -856270040;
unsigned char var_14 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
