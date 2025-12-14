#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-66;
signed char var_6 = (signed char)-69;
unsigned int var_7 = 462820345U;
unsigned int var_8 = 1462824113U;
long long int var_18 = 4371377601273523033LL;
int zero = 0;
unsigned int var_20 = 4197338521U;
long long int var_21 = -6327298826353126099LL;
unsigned long long int var_22 = 16297626934279049839ULL;
unsigned long long int var_23 = 4950684197060456587ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
