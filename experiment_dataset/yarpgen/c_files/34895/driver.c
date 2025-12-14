#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -890666764;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 2925796840236768977ULL;
signed char var_8 = (signed char)-103;
int var_10 = 1526847213;
signed char var_13 = (signed char)-61;
unsigned short var_15 = (unsigned short)32489;
short var_17 = (short)10114;
int var_19 = 1022984922;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2514417506762883656ULL;
unsigned long long int var_22 = 1725569675333688306ULL;
unsigned char var_23 = (unsigned char)236;
int var_24 = -1318702814;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
