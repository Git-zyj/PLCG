#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 1017613942;
unsigned long long int var_3 = 5940957336586853789ULL;
unsigned char var_8 = (unsigned char)38;
signed char var_9 = (signed char)-4;
unsigned short var_11 = (unsigned short)43801;
unsigned char var_14 = (unsigned char)176;
int zero = 0;
unsigned char var_18 = (unsigned char)15;
unsigned long long int var_19 = 15304562273333272318ULL;
signed char var_20 = (signed char)93;
void init() {
}

void checksum() {
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
