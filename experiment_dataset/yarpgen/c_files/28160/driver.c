#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)147;
_Bool var_5 = (_Bool)0;
int var_10 = -1297910471;
unsigned char var_15 = (unsigned char)203;
int zero = 0;
signed char var_19 = (signed char)51;
int var_20 = -1288758222;
int var_21 = -725563297;
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
