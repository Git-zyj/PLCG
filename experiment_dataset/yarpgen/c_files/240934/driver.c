#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 775093518;
unsigned long long int var_3 = 3163591931267627700ULL;
unsigned int var_8 = 79387374U;
int var_10 = 1576423236;
long long int var_13 = -7026697788778836091LL;
int zero = 0;
unsigned char var_19 = (unsigned char)220;
short var_20 = (short)-10671;
void init() {
}

void checksum() {
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
