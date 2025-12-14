#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)135;
unsigned long long int var_3 = 5128178480742479629ULL;
unsigned int var_4 = 1044247297U;
unsigned char var_5 = (unsigned char)70;
unsigned int var_7 = 2884638540U;
unsigned char var_8 = (unsigned char)13;
unsigned int var_9 = 722643282U;
unsigned int var_10 = 27201204U;
int zero = 0;
int var_16 = 1142550231;
unsigned int var_17 = 805067008U;
unsigned int var_18 = 593466820U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
