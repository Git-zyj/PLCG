#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -631270716858823437LL;
long long int var_6 = 4482161366434396051LL;
long long int var_10 = 6334402582593605818LL;
long long int var_11 = 1071783400469423955LL;
long long int var_19 = -5493987710481319525LL;
int zero = 0;
long long int var_20 = 939216005602809687LL;
long long int var_21 = 3249266037736701088LL;
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
