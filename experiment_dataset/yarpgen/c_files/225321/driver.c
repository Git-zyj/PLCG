#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
unsigned char var_7 = (unsigned char)249;
unsigned long long int var_9 = 4986287695637294325ULL;
unsigned short var_10 = (unsigned short)47291;
unsigned short var_12 = (unsigned short)26036;
int var_13 = 530750658;
int var_14 = -2137594075;
int var_15 = -321624658;
int zero = 0;
long long int var_17 = -551218331768653398LL;
int var_18 = -1430364013;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)117;
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
