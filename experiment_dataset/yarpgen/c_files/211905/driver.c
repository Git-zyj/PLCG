#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9721366215916768050ULL;
unsigned short var_3 = (unsigned short)26608;
unsigned long long int var_7 = 4752535769807884213ULL;
long long int var_11 = -4239434321608173407LL;
int zero = 0;
unsigned char var_14 = (unsigned char)136;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8144918414392273719LL;
void init() {
}

void checksum() {
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
