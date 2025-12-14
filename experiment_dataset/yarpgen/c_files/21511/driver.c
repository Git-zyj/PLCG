#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1060442048U;
unsigned int var_4 = 2387967386U;
signed char var_6 = (signed char)-76;
short var_8 = (short)4738;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)206;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 4449527972327430723LL;
unsigned char var_20 = (unsigned char)43;
unsigned long long int var_21 = 17680146950984932227ULL;
unsigned short var_22 = (unsigned short)55569;
unsigned int var_23 = 1208121152U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
