#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1373155669908062175LL;
unsigned short var_2 = (unsigned short)47816;
long long int var_3 = 8319345787226851272LL;
unsigned short var_4 = (unsigned short)32738;
unsigned short var_5 = (unsigned short)56900;
unsigned int var_7 = 3671062759U;
int zero = 0;
int var_11 = 1470317603;
unsigned short var_12 = (unsigned short)40147;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
