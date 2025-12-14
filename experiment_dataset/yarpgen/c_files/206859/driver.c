#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8955;
int var_1 = 800934601;
unsigned char var_4 = (unsigned char)187;
long long int var_6 = -8130359932864403550LL;
unsigned int var_7 = 2823787530U;
unsigned long long int var_8 = 1927298418741340067ULL;
int zero = 0;
long long int var_15 = 3772908489043257085LL;
unsigned int var_16 = 492515281U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
