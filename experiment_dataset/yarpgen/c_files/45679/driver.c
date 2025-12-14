#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8252240086500119321ULL;
unsigned long long int var_2 = 3337196104062926384ULL;
unsigned long long int var_6 = 7406660490594605566ULL;
unsigned int var_12 = 1172395779U;
unsigned char var_13 = (unsigned char)9;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)67;
long long int var_18 = -7912715336047466077LL;
int zero = 0;
long long int var_19 = 9140602079113809533LL;
unsigned long long int var_20 = 910598941513064865ULL;
long long int var_21 = 7307236470113312785LL;
unsigned short var_22 = (unsigned short)34831;
long long int var_23 = 2363049562609762271LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
