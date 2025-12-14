#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19681;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)15;
unsigned char var_5 = (unsigned char)49;
int var_6 = -101577087;
short var_8 = (short)32617;
int zero = 0;
unsigned int var_12 = 2768667626U;
unsigned long long int var_13 = 10376353293645494055ULL;
long long int var_14 = -3083480158261225123LL;
unsigned char var_15 = (unsigned char)69;
unsigned char var_16 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
