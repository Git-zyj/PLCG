#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4342;
unsigned short var_3 = (unsigned short)6339;
unsigned long long int var_6 = 7636894886292335697ULL;
unsigned short var_7 = (unsigned short)28863;
long long int var_8 = -5707035134072439038LL;
int zero = 0;
unsigned long long int var_11 = 83626842340322932ULL;
signed char var_12 = (signed char)51;
long long int var_13 = -5103222656541878385LL;
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
