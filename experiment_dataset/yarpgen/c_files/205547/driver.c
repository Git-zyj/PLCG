#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2126472204061052562LL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)11218;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)62051;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)39179;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -4193917442452740250LL;
unsigned short var_15 = (unsigned short)13666;
unsigned short var_16 = (unsigned short)52640;
long long int var_17 = 3220432664748274475LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
