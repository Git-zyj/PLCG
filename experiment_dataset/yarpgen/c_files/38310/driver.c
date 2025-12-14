#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4280044719U;
unsigned long long int var_5 = 9214569592800951858ULL;
int var_16 = 1030969063;
int zero = 0;
signed char var_17 = (signed char)0;
unsigned char var_18 = (unsigned char)156;
_Bool var_19 = (_Bool)0;
int var_20 = 1271884415;
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
