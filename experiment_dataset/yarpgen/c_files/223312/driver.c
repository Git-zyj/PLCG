#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned int var_2 = 4113678297U;
int var_5 = 917700256;
int var_7 = 676198901;
int var_11 = -435741200;
unsigned int var_18 = 1286777742U;
int var_19 = -1116176139;
int zero = 0;
signed char var_20 = (signed char)-64;
unsigned int var_21 = 2159167679U;
void init() {
}

void checksum() {
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
