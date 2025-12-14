#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)145;
long long int var_3 = -6074064860801408543LL;
unsigned char var_6 = (unsigned char)244;
unsigned int var_8 = 4145753504U;
short var_11 = (short)30529;
int zero = 0;
unsigned char var_17 = (unsigned char)49;
long long int var_18 = 6427210206926737360LL;
unsigned short var_19 = (unsigned short)14013;
unsigned long long int var_20 = 13142423615788727744ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
