#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15529;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = 1053309647;
signed char var_14 = (signed char)-123;
int zero = 0;
unsigned char var_17 = (unsigned char)164;
unsigned long long int var_18 = 12378284333259996033ULL;
unsigned int var_19 = 4170999579U;
unsigned long long int var_20 = 13849172881807080661ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
