#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 27390205807059497ULL;
unsigned short var_5 = (unsigned short)52397;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)47225;
int zero = 0;
unsigned char var_12 = (unsigned char)18;
unsigned long long int var_13 = 4639957021924563156ULL;
short var_14 = (short)5569;
int var_15 = 1347318722;
void init() {
}

void checksum() {
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
