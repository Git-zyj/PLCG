#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10107409387394126922ULL;
short var_2 = (short)-31253;
long long int var_3 = 8633894475707010995LL;
short var_8 = (short)-3327;
unsigned char var_9 = (unsigned char)29;
int zero = 0;
short var_10 = (short)-9166;
unsigned short var_11 = (unsigned short)20004;
unsigned int var_12 = 3183620903U;
long long int var_13 = -7131114390408309999LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
