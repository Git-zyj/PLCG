#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -901667228;
signed char var_3 = (signed char)52;
unsigned int var_5 = 4134173643U;
signed char var_6 = (signed char)-85;
long long int var_7 = -2448597503029837191LL;
long long int var_9 = -6287944192429285667LL;
int zero = 0;
unsigned char var_10 = (unsigned char)170;
unsigned int var_11 = 921774796U;
unsigned char var_12 = (unsigned char)91;
long long int var_13 = -2195412760137340617LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
