#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15673;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_9 = -1603134987;
unsigned char var_13 = (unsigned char)148;
int zero = 0;
unsigned short var_17 = (unsigned short)47219;
unsigned short var_18 = (unsigned short)28651;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
