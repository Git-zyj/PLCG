#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7039776891512522296LL;
int var_1 = 1058633958;
short var_2 = (short)23619;
short var_3 = (short)-13956;
unsigned char var_4 = (unsigned char)13;
signed char var_5 = (signed char)36;
long long int var_6 = -8995422185190442796LL;
unsigned char var_7 = (unsigned char)9;
unsigned long long int var_8 = 4051717628195046761ULL;
long long int var_9 = 6359729086750865526LL;
unsigned int var_10 = 817230695U;
int zero = 0;
int var_11 = 1477203794;
unsigned char var_12 = (unsigned char)199;
signed char var_13 = (signed char)-52;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
