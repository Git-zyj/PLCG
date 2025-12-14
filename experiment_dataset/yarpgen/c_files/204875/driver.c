#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
unsigned int var_1 = 2740244951U;
long long int var_3 = -9091821716539119629LL;
long long int var_4 = 9177631443247698231LL;
signed char var_5 = (signed char)58;
unsigned int var_7 = 4056806579U;
signed char var_8 = (signed char)43;
int zero = 0;
unsigned int var_11 = 2747583445U;
long long int var_12 = -4588852094927168413LL;
long long int var_13 = 218983140296531339LL;
unsigned int var_14 = 3533156233U;
long long int var_15 = 1601952964720673954LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
