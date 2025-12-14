#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
int var_1 = -1967298922;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)4940;
signed char var_4 = (signed char)114;
unsigned long long int var_5 = 795341396466579149ULL;
long long int var_6 = 4963998272057744616LL;
unsigned long long int var_7 = 17715686842544058139ULL;
unsigned long long int var_9 = 17935071881827473914ULL;
int zero = 0;
unsigned long long int var_11 = 3742349022023217932ULL;
int var_12 = -345370526;
signed char var_13 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
