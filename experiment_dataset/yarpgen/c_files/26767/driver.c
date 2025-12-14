#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -252200636;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 13356926047532486830ULL;
unsigned int var_8 = 1244231787U;
unsigned int var_11 = 3417880411U;
int zero = 0;
unsigned char var_12 = (unsigned char)168;
unsigned long long int var_13 = 10530329531601162430ULL;
unsigned char var_14 = (unsigned char)182;
unsigned long long int var_15 = 9208889592620961322ULL;
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
