#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3325799263560650001LL;
unsigned int var_3 = 3525898425U;
short var_5 = (short)-29633;
unsigned short var_6 = (unsigned short)54385;
signed char var_8 = (signed char)-107;
unsigned int var_10 = 331205294U;
long long int var_11 = -281248100110858818LL;
int zero = 0;
short var_12 = (short)23635;
unsigned char var_13 = (unsigned char)48;
long long int var_14 = -5637421010639456984LL;
unsigned char var_15 = (unsigned char)223;
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
