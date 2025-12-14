#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 5905379570453770593ULL;
signed char var_6 = (signed char)79;
unsigned short var_7 = (unsigned short)45921;
long long int var_10 = 5956329198412453704LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1894847013U;
unsigned int var_19 = 4287251432U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
