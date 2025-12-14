#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_7 = (unsigned char)37;
unsigned long long int var_8 = 9891983459730376721ULL;
unsigned int var_9 = 710646251U;
int zero = 0;
unsigned short var_12 = (unsigned short)45908;
unsigned long long int var_13 = 7773820244863614329ULL;
unsigned int var_14 = 348407312U;
signed char var_15 = (signed char)1;
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
