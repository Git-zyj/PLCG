#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3433774395863782861LL;
unsigned short var_2 = (unsigned short)5647;
signed char var_7 = (signed char)-125;
signed char var_8 = (signed char)-123;
signed char var_11 = (signed char)-89;
long long int var_14 = 3850211682805842955LL;
int zero = 0;
int var_17 = 1956782863;
unsigned char var_18 = (unsigned char)36;
long long int var_19 = 923954001775323191LL;
unsigned char var_20 = (unsigned char)54;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
