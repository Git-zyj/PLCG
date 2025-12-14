#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4525331331759885152ULL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -2241851247642621246LL;
long long int var_7 = -4620980345822661302LL;
int zero = 0;
long long int var_11 = 5752019534994406199LL;
unsigned char var_12 = (unsigned char)136;
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
