#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)105;
long long int var_3 = 1481935576536101974LL;
long long int var_6 = 8860525735852467922LL;
short var_7 = (short)-1058;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)7586;
unsigned long long int var_12 = 15012513804724589511ULL;
long long int var_13 = 1666612611082092612LL;
int zero = 0;
long long int var_15 = 756737094444916818LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5426282491765229633ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
