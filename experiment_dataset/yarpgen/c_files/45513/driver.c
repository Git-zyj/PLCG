#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6344574449330784288LL;
unsigned long long int var_2 = 5284281277321996560ULL;
unsigned long long int var_3 = 16944142292719481951ULL;
int var_4 = 1122556633;
unsigned long long int var_5 = 15439847803797217635ULL;
_Bool var_6 = (_Bool)0;
long long int var_10 = 5225125201418914289LL;
unsigned short var_11 = (unsigned short)55498;
int zero = 0;
unsigned char var_12 = (unsigned char)224;
unsigned int var_13 = 1352644847U;
unsigned long long int var_14 = 13191225089770352357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
