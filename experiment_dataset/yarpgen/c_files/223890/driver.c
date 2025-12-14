#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9153432307065700187LL;
int var_4 = 1218062758;
long long int var_5 = 5243522224430430775LL;
short var_7 = (short)11192;
int zero = 0;
long long int var_11 = 5924650160630254582LL;
unsigned char var_12 = (unsigned char)62;
int var_13 = -1179294465;
signed char var_14 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
