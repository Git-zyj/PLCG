#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -912816900;
signed char var_2 = (signed char)127;
long long int var_5 = -7502597559217099644LL;
signed char var_7 = (signed char)83;
unsigned short var_8 = (unsigned short)46909;
unsigned short var_9 = (unsigned short)21957;
unsigned long long int var_11 = 7482619889750522003ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_19 = 4720996528342224672LL;
int var_20 = -450337307;
unsigned long long int var_21 = 1464286476586681691ULL;
int var_22 = 75672971;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
