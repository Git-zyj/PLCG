#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)13570;
long long int var_3 = -4145763447846130784LL;
unsigned char var_4 = (unsigned char)245;
unsigned char var_5 = (unsigned char)38;
unsigned long long int var_7 = 9113793384965633185ULL;
signed char var_9 = (signed char)89;
unsigned char var_11 = (unsigned char)114;
signed char var_14 = (signed char)-75;
unsigned long long int var_15 = 17356035921627223599ULL;
int var_16 = 1899818648;
int var_18 = 1553604817;
int zero = 0;
long long int var_19 = -9162039213244160655LL;
unsigned int var_20 = 852040868U;
long long int var_21 = -1964732031738012878LL;
_Bool var_22 = (_Bool)1;
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
