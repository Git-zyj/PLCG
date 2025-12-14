#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11275473200742931032ULL;
unsigned char var_1 = (unsigned char)211;
int var_3 = -974510507;
long long int var_7 = 6530377134746254205LL;
unsigned long long int var_8 = 10923243988349514431ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 3159850874568789107LL;
int zero = 0;
signed char var_11 = (signed char)-124;
unsigned char var_12 = (unsigned char)9;
long long int var_13 = -5187696260998355419LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
