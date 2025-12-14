#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16697;
long long int var_1 = -1392331362248115590LL;
unsigned int var_2 = 43753998U;
unsigned long long int var_4 = 1082415481934418579ULL;
unsigned char var_5 = (unsigned char)229;
unsigned int var_6 = 367070374U;
unsigned long long int var_9 = 4332301822969541752ULL;
unsigned char var_10 = (unsigned char)228;
int zero = 0;
short var_11 = (short)-32555;
_Bool var_12 = (_Bool)0;
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
