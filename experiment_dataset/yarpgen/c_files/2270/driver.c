#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
_Bool var_1 = (_Bool)0;
long long int var_2 = 8614590073585710789LL;
long long int var_8 = -8677906638131371426LL;
unsigned char var_9 = (unsigned char)105;
int var_10 = 2035933827;
unsigned long long int var_11 = 12720876252854312305ULL;
signed char var_12 = (signed char)-28;
int zero = 0;
long long int var_13 = 4502899232503282584LL;
unsigned char var_14 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
