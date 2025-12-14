#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5632457590873560052ULL;
int var_2 = -1101677056;
unsigned char var_4 = (unsigned char)142;
signed char var_5 = (signed char)127;
unsigned int var_6 = 2039068190U;
unsigned char var_7 = (unsigned char)20;
unsigned char var_8 = (unsigned char)68;
int zero = 0;
unsigned long long int var_17 = 17761821461218931838ULL;
unsigned int var_18 = 2549289811U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
