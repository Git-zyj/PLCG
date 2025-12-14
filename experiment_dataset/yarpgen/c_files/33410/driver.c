#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4011868199892410617ULL;
unsigned int var_4 = 516117328U;
unsigned long long int var_5 = 11470121656306378129ULL;
short var_6 = (short)9168;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 5031793189580882447ULL;
short var_12 = (short)3413;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
