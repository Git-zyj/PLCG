#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58301;
short var_3 = (short)-21016;
_Bool var_4 = (_Bool)1;
signed char var_10 = (signed char)-85;
unsigned long long int var_11 = 9491454071341132856ULL;
short var_13 = (short)32444;
long long int var_16 = -6509543320409176752LL;
short var_17 = (short)9443;
int zero = 0;
unsigned short var_18 = (unsigned short)25274;
unsigned int var_19 = 16763334U;
_Bool var_20 = (_Bool)0;
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
