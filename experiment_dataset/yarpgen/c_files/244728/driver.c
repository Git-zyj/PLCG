#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7928385044421905861LL;
unsigned long long int var_7 = 16631805244691155842ULL;
short var_13 = (short)-8932;
short var_16 = (short)-8227;
int zero = 0;
unsigned short var_18 = (unsigned short)18605;
_Bool var_19 = (_Bool)1;
int var_20 = 47153641;
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
