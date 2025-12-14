#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
unsigned short var_1 = (unsigned short)558;
int var_5 = 1785784749;
unsigned int var_6 = 3468643335U;
unsigned int var_7 = 2532247410U;
_Bool var_8 = (_Bool)0;
int var_9 = 1572710768;
unsigned char var_10 = (unsigned char)117;
signed char var_11 = (signed char)-115;
long long int var_12 = -3320621428909569048LL;
int zero = 0;
signed char var_15 = (signed char)-117;
signed char var_16 = (signed char)-23;
void init() {
}

void checksum() {
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
