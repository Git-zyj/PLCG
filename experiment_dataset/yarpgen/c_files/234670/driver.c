#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17257;
unsigned long long int var_4 = 43813862704588534ULL;
unsigned short var_5 = (unsigned short)54488;
long long int var_7 = -8928589395031409635LL;
int var_10 = 1300437689;
signed char var_13 = (signed char)-87;
unsigned long long int var_15 = 17776796777168639485ULL;
int zero = 0;
long long int var_18 = 3059337105591509740LL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
