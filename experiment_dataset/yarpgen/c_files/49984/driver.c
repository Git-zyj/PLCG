#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
long long int var_1 = -2273910769473410698LL;
unsigned int var_3 = 4154764846U;
long long int var_4 = -5231239749955822861LL;
long long int var_5 = 6314253992267419771LL;
int var_6 = -422209062;
unsigned short var_7 = (unsigned short)45084;
unsigned char var_8 = (unsigned char)211;
long long int var_10 = -8264759405411210756LL;
int zero = 0;
unsigned long long int var_12 = 10485610738734845268ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2013601899U;
void init() {
}

void checksum() {
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
