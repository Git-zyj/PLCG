#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22478;
unsigned long long int var_6 = 2004707072835364588ULL;
short var_13 = (short)-26701;
int zero = 0;
unsigned char var_18 = (unsigned char)125;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-31478;
unsigned long long int var_21 = 17006904577469033252ULL;
unsigned short var_22 = (unsigned short)54912;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
