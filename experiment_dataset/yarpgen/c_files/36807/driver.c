#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -729172052;
_Bool var_4 = (_Bool)1;
int var_9 = 405661095;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 364074070U;
unsigned char var_19 = (unsigned char)222;
unsigned short var_20 = (unsigned short)45198;
unsigned long long int var_21 = 6595401620508040339ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
