#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3744667367U;
int var_5 = 1336368280;
short var_9 = (short)-3713;
unsigned char var_13 = (unsigned char)142;
int zero = 0;
unsigned int var_19 = 3804553209U;
unsigned char var_20 = (unsigned char)17;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-46;
void init() {
}

void checksum() {
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
