#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48753;
signed char var_3 = (signed char)-53;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)42476;
int var_9 = 234006586;
int zero = 0;
int var_10 = -1155142963;
long long int var_11 = -8129015990627292141LL;
signed char var_12 = (signed char)-111;
signed char var_13 = (signed char)-13;
unsigned short var_14 = (unsigned short)8789;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
