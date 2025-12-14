#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 969943050U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)180;
unsigned long long int var_14 = 10704816266846811037ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-105;
unsigned short var_20 = (unsigned short)61253;
unsigned char var_21 = (unsigned char)116;
unsigned short var_22 = (unsigned short)1228;
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
