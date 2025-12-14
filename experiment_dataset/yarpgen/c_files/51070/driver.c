#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53340;
unsigned int var_1 = 1485824453U;
long long int var_2 = 4046749687694624156LL;
long long int var_7 = 5483986383004304121LL;
signed char var_10 = (signed char)-69;
int zero = 0;
unsigned long long int var_13 = 10897224333373103319ULL;
unsigned int var_14 = 3406955995U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
