#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2434;
unsigned int var_4 = 193655849U;
unsigned int var_5 = 3564658071U;
unsigned int var_15 = 2209868255U;
unsigned long long int var_18 = 11266966083785605721ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)58617;
unsigned char var_20 = (unsigned char)153;
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
