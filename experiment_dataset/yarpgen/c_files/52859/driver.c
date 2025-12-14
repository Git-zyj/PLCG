#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -202483396;
int var_5 = -450201873;
unsigned int var_6 = 1935111316U;
int var_7 = -80182224;
unsigned short var_8 = (unsigned short)5504;
unsigned long long int var_10 = 8192169685563815678ULL;
int var_13 = 1789412697;
int zero = 0;
long long int var_18 = 1363951547634163331LL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)74;
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
