#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10990236154803561964ULL;
unsigned short var_10 = (unsigned short)28962;
unsigned long long int var_14 = 13733231663236722562ULL;
int zero = 0;
signed char var_18 = (signed char)-48;
short var_19 = (short)-23266;
int var_20 = -631194836;
signed char var_21 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
