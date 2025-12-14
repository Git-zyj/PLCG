#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)101;
unsigned long long int var_3 = 8433858654293365820ULL;
unsigned char var_4 = (unsigned char)133;
unsigned long long int var_5 = 13612216229341287853ULL;
signed char var_8 = (signed char)-28;
unsigned long long int var_12 = 15866546802087069760ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)47532;
short var_16 = (short)28992;
unsigned short var_17 = (unsigned short)64541;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
