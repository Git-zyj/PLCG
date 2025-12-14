#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1407195827;
unsigned short var_1 = (unsigned short)30011;
unsigned long long int var_4 = 15182563651531935826ULL;
short var_6 = (short)-15316;
signed char var_9 = (signed char)-59;
unsigned int var_10 = 3218483377U;
int zero = 0;
long long int var_13 = 4588012543792633517LL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)5200;
unsigned int var_16 = 941134807U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
