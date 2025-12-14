#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -615481372;
short var_3 = (short)-24977;
int var_4 = -1519708327;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)20996;
int var_11 = -737180981;
int zero = 0;
unsigned long long int var_13 = 11452370733895513762ULL;
int var_14 = -254038416;
unsigned short var_15 = (unsigned short)47454;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
