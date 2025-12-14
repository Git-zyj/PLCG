#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35344;
int var_1 = -341902;
_Bool var_2 = (_Bool)1;
int var_3 = 1107741117;
unsigned char var_5 = (unsigned char)253;
unsigned int var_6 = 1282904642U;
signed char var_8 = (signed char)-31;
unsigned int var_9 = 1961414952U;
int zero = 0;
unsigned char var_12 = (unsigned char)110;
unsigned short var_13 = (unsigned short)42955;
unsigned char var_14 = (unsigned char)85;
unsigned int var_15 = 1486831395U;
unsigned int var_16 = 3974381578U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
