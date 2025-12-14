#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned long long int var_3 = 2529417255469759746ULL;
unsigned long long int var_5 = 3498991182716576483ULL;
unsigned long long int var_7 = 18210692953962349872ULL;
long long int var_10 = -6668140447689530212LL;
signed char var_11 = (signed char)-11;
unsigned long long int var_15 = 16988654492743929871ULL;
unsigned long long int var_18 = 1850139775331847511ULL;
signed char var_19 = (signed char)115;
int zero = 0;
short var_20 = (short)-19889;
unsigned char var_21 = (unsigned char)58;
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
