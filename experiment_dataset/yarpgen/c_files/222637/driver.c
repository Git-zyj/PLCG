#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-27;
unsigned long long int var_4 = 14135556229015665895ULL;
int var_10 = 1509150678;
signed char var_15 = (signed char)-3;
unsigned char var_16 = (unsigned char)121;
int zero = 0;
int var_19 = 1036913606;
int var_20 = -1068869387;
unsigned short var_21 = (unsigned short)48814;
void init() {
}

void checksum() {
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
