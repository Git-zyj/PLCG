#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6086786430981317406ULL;
signed char var_2 = (signed char)1;
long long int var_4 = 4569350859852204153LL;
unsigned short var_8 = (unsigned short)65397;
int zero = 0;
unsigned int var_20 = 1255394286U;
signed char var_21 = (signed char)-57;
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
