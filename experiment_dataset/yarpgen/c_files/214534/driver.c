#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_6 = 1172933409595038546LL;
unsigned long long int var_11 = 18279443886895597681ULL;
unsigned long long int var_13 = 2172909721977588220ULL;
unsigned short var_15 = (unsigned short)55693;
int zero = 0;
unsigned char var_20 = (unsigned char)66;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
