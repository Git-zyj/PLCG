#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1123384182;
unsigned long long int var_2 = 16938300377035320546ULL;
unsigned char var_3 = (unsigned char)66;
_Bool var_6 = (_Bool)1;
long long int var_10 = -9021492756260849237LL;
int var_11 = 777015359;
long long int var_12 = -7738685852926585987LL;
signed char var_13 = (signed char)-31;
unsigned char var_15 = (unsigned char)196;
unsigned char var_18 = (unsigned char)13;
int zero = 0;
short var_19 = (short)31077;
unsigned char var_20 = (unsigned char)239;
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
