#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1114132334;
unsigned char var_16 = (unsigned char)30;
int zero = 0;
unsigned char var_19 = (unsigned char)180;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1332238464U;
unsigned int var_22 = 1851606020U;
signed char var_23 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
