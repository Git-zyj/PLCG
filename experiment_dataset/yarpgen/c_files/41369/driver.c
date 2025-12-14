#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6799620416182836893ULL;
int var_3 = 1182988502;
long long int var_10 = 6303212457541499374LL;
int var_13 = 793043432;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_17 = 308074247;
unsigned char var_18 = (unsigned char)45;
void init() {
}

void checksum() {
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
