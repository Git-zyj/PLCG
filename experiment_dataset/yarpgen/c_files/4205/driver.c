#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)38465;
unsigned short var_2 = (unsigned short)5734;
unsigned int var_4 = 2144710599U;
long long int var_5 = 5450166992968675648LL;
_Bool var_7 = (_Bool)1;
int var_8 = -1404613575;
int var_9 = 720056609;
unsigned char var_11 = (unsigned char)71;
int zero = 0;
int var_15 = -1544121750;
signed char var_16 = (signed char)-98;
signed char var_17 = (signed char)122;
unsigned short var_18 = (unsigned short)50339;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
