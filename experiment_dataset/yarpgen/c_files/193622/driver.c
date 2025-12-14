#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1482232903;
signed char var_1 = (signed char)77;
long long int var_2 = -121734029839258028LL;
int var_3 = 715041899;
_Bool var_4 = (_Bool)1;
int var_5 = 297462381;
unsigned short var_6 = (unsigned short)59694;
unsigned char var_8 = (unsigned char)156;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 5999388697662600418LL;
long long int var_13 = 1006650581580307949LL;
signed char var_14 = (signed char)-127;
long long int var_15 = -8454069330418011595LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
