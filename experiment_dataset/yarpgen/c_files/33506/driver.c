#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned long long int var_2 = 18024117812016026053ULL;
unsigned long long int var_3 = 7895264255833821747ULL;
long long int var_7 = 4707164726535248188LL;
unsigned long long int var_8 = 149201818837102715ULL;
unsigned int var_12 = 4241062666U;
unsigned long long int var_13 = 10208260456506720754ULL;
int zero = 0;
signed char var_16 = (signed char)-73;
unsigned int var_17 = 4236217006U;
int var_18 = 114271753;
long long int var_19 = 4767097404756061131LL;
unsigned long long int var_20 = 12010882666696481367ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
