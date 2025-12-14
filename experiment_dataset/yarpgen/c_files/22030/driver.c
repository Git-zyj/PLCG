#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25880;
unsigned long long int var_3 = 18375842325632643419ULL;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_13 = -8459473748095366396LL;
unsigned long long int var_16 = 1142130824493881326ULL;
unsigned short var_18 = (unsigned short)50429;
int zero = 0;
unsigned char var_19 = (unsigned char)98;
unsigned short var_20 = (unsigned short)6184;
unsigned int var_21 = 3324541886U;
long long int var_22 = -3421802833327202067LL;
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
