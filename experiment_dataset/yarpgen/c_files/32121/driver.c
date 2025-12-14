#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
unsigned short var_1 = (unsigned short)397;
unsigned long long int var_3 = 4212505343423165095ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 14543371456657960565ULL;
unsigned char var_10 = (unsigned char)114;
unsigned long long int var_12 = 5652192597597660292ULL;
short var_15 = (short)15506;
unsigned short var_16 = (unsigned short)9849;
long long int var_19 = 9156557818090599616LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 348965135;
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
